#include "friendpage.h"
#include "ui_friendpage.h"
#include "addfrienddialog.h"
#include "msgtools.h"
#include "friendapplicationlist.h"
#include "bubbletips.h"
#include "friendlistitemwidget.h"
#include "respondwatcher.h"
#include "statusCode.h"

#include <QEventLoop>
#include <QTimer>
#include <QStringList>
#include <QtConcurrent/QtConcurrent>
#include <functional>
#include <QListWidgetItem>
#include <QSize>
#include <QPoint>
#include <QDateTime>
#include <QDebug>

FriendPage::FriendPage(QString _userId, QString _userEmail, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendPage),
    userId(_userId),
    userEmail(_userEmail)
{
    ui->setupUi(this);

    ui->chatBox->hide();

    init();
    iniSignalSlots();
}

FriendPage::~FriendPage()
{
    delete ui;
}

void FriendPage::refreshFriendListManually()
{
    clickTbFlushFriendList();
}

void FriendPage::init()
{
    // 初始化UI文本
    ui->sessionName->setText("选择好友开始聊天");
    ui->chatContent->setPlainText("");
    ui->chatContent->setPlaceholderText("聊天内容将在这里显示...");
    ui->inputBox->setPlaceholderText("在这里输入消息...");
    ui->searchLine->setPlaceholderText("搜索好友");
}

void FriendPage::iniSignalSlots()
{
    connect(ui->tb_newFriend, &QToolButton::clicked, this, &FriendPage::clickTbNewFriend);
    connect(ui->tb_search, &QToolButton::clicked, this, &FriendPage::clickTbSearch);
    connect(ui->tb_clear, &QToolButton::clicked, this, &FriendPage::clickTbClear);
    connect(ui->tb_send, &QToolButton::clicked, this, &FriendPage::clickTbSend);
    connect(ui->tb_notification, &QToolButton::clicked, this, &FriendPage::clickTbNotification);
    connect(ui->tb_flushFriendList, &QToolButton::clicked, this, &FriendPage::clickTbFlushFriendList);
}

void FriendPage::flushFriendList(std::shared_ptr<MsgUnit> sptr)
{
    QStringList list = MsgTools::getAllRows(sptr.get());

    if (list.size() >= 2 && list[0] == "failure")
    {
        QString statusCode = list[1];
        if (statusCode.length() <= 7)
            BubbleTips::showBubbleTips("通信错误", 2, this);
        else
            BubbleTips::showBubbleTips(getStatusCodeString(statusCode.mid(7)), 2, this);
        return;
    }

    for (int i = ui->friendList->count() - 1; ~i; --i)
    {
        QListWidgetItem* item = ui->friendList->item(i);
        FriendListItemWidget* iw = (FriendListItemWidget*)ui->friendList->itemWidget(item);
        if (nullptr != iw)
        {
            iw->deleteLater();
            ui->friendList->setItemWidget(item, nullptr);
        }
        ui->friendList->takeItem(i);
    }

    for (const QString& str : list)
    {
        if (1 != str.count('|'))
            continue;
        QStringList para = str.split('|');
        QListWidgetItem* item = new QListWidgetItem(ui->friendList);
        FriendListItemWidget* iw = new FriendListItemWidget(para[1], "", para[0], para[1], ui->friendList);
        ui->friendList->setItemWidget(item, iw);
        item->setSizeHint(QSize(ui->friendList->width() - 10, iw->height()));

        // 连接好友列表项的点击信号
        connect(iw, &FriendListItemWidget::clicked, this, &FriendPage::startChatWithFriend);
    }
}

void FriendPage::clickTbNewFriend()
{
    AddFriendDialog *afd = new AddFriendDialog(userId, userEmail, this);
    QMetaObject::Connection conn1 = connect(afd, &AddFriendDialog::_searchUser, [this](QString key){
        emit _sendMsg(MsgTools::generateSearchUserRequest(key));
    });
    QMetaObject::Connection conn2 = connect(afd, &AddFriendDialog::_addFriend, [this](QString to){
        emit _sendMsg(MsgTools::generateAddFriendRequest(userId, to));
    });
    afd->exec();
    disconnect(conn1);
    disconnect(conn2);
    if (nullptr != afd)
    {
        delete afd;
        afd = nullptr;
    }
}

void FriendPage::clickTbSearch()
{

}

void FriendPage::clickTbClear()
{
    ui->inputBox->clear();
}

void FriendPage::clickTbSend()
{
    if (currentChatFriendId.isEmpty()) {
        BubbleTips::showBubbleTips("请先选择要聊天的好友", 2, this);
        return;
    }

    QString message = ui->inputBox->toPlainText().trimmed();
    if (message.isEmpty()) {
        BubbleTips::showBubbleTips("消息内容不能为空", 2, this);
        return;
    }

    // 发送私聊消息
    emit _sendMsg(MsgTools::generateSendPrivateMsgRequest(userId, currentChatFriendId, message));

    // 在聊天框中显示发送的消息
    QString displayMsg = QString("[%1] %2: %3\n")
                             .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
                             .arg(userEmail)
                             .arg(message);
    ui->chatContent->appendPlainText(displayMsg);

    // 清空输入框
    ui->inputBox->clear();
}

void FriendPage::clickTbNotification()
{
    FriendApplicationList *fal = new FriendApplicationList(this);
    QMetaObject::Connection conn1 = connect(fal, &FriendApplicationList::getApplicaionList, [this](){
        emit _sendMsg(MsgTools::generateGetFriendApplicationRequest(userId));
    });
    QMetaObject::Connection conn2 = connect(fal, &FriendApplicationList::verifyFriend, [this](QString regId, bool flag){
        emit _sendMsg(MsgTools::generateVerifyFriendRequest(regId, flag));
    });
    fal->refreshManually();
    fal->exec();
    disconnect(conn1);
    if (nullptr != fal)
    {
        delete fal;
        fal = nullptr;
    }
}

void FriendPage::clickTbFlushFriendList()
{
    RespondWatcher::createBgRw(this, SIGNAL(respondGetFriendList(std::shared_ptr<MsgUnit>)), "好友列表刷新超时", 3,
                               QPoint(this->pos().rx() + this->width() / 2, this->pos().ry() + this->height() / 2),
                               [this](std::shared_ptr<MsgUnit> sptr){
                                   flushFriendList(sptr);
                               });
    emit _sendMsg(MsgTools::generateGetFriendListRequest(userId));
}

void FriendPage::getMsg(std::shared_ptr<MsgUnit> sptr)
{
    if (MsgType::MSG_TYPE_SEARCHUSER_RESPOND == sptr->msgType)
        emit respondSearch(sptr);
    else if (MsgType::MSG_TYPE_ADDFRIEND_RESPOND == sptr->msgType)
        emit respondAddFriend(sptr);
    else if (MsgType::MSG_TYPE_GETFRIENDAPPLICATIONLIST_RESPOND == sptr->msgType)
        emit respondGetFriendApplication(sptr);
    else if (MsgType::MSG_TYPE_FRIENDVERIFICATION_RESPOND == sptr->msgType)
        emit respondVerify(sptr);
    else if (MsgType::MSG_TYPE_GETFRIENDLIST_RESPOND == sptr->msgType)
        emit respondGetFriendList(sptr);
    else if (MsgType::MSG_TYPE_SENDPRIVATEMSG_RESPOND == sptr->msgType)
    {
        // 处理发送私聊消息的响应
        QStringList list = MsgTools::getAllRows(sptr.get());
        if (list.size() >= 1 && list[0] == "failure") {
            QString errorMsg = "消息发送失败";
            if (list.size() >= 2) {
                QString status = list[1];
                if (status.contains("USER_OFFLINE")) {
                    errorMsg = "好友当前不在线，消息发送失败";
                } else if (status.contains("INVALID_PARAMS")) {
                    errorMsg = "消息格式错误";
                } else if (status.contains("SEND_FAILED")) {
                    errorMsg = "网络错误，消息发送失败";
                }
            }
            BubbleTips::showBubbleTips(errorMsg, 2, this);
        } else if (list.size() >= 1 && list[0] == "success") {
            // 消息发送成功，可以显示一个简短的提示
            // BubbleTips::showBubbleTips("消息发送成功", 1, this);
        }
    }
    else if (MsgType::MSG_TYPE_RECEIVEPRIVATEMSG_NOTIFY == sptr->msgType)
    {
        // 处理接收到的私聊消息
        displayPrivateMessage(sptr);
    }
}

void FriendPage::startChatWithFriend(QString friendId, QString friendEmail)
{
    currentChatFriendId = friendId;
    currentChatFriendEmail = friendEmail;

    // 显示聊天界面
    ui->chatBox->show();
    ui->chatContent->clear();

    // 设置聊天标题
    QString chatTitle = QString("与 %1 聊天").arg(friendEmail);
    ui->sessionName->setText(chatTitle);

    BubbleTips::showBubbleTips(QString("开始与 %1 聊天").arg(friendEmail), 1, this);
}

void FriendPage::displayPrivateMessage(std::shared_ptr<MsgUnit> sptr)
{
    QStringList list = MsgTools::getAllRows(sptr.get());

    QString from, to, message;

    // 解析消息格式
    for (const QString& line : list) {
        if (line.startsWith("from:")) {
            from = line.mid(5);
        } else if (line.startsWith("to:")) {
            to = line.mid(3);
        } else if (line.startsWith("msg:")) {
            message = line.mid(4);
        }
    }

    // 检查是否成功解析了所有必要的字段
    if (from.isEmpty() || to.isEmpty() || message.isEmpty()) {
        qDebug() << "Failed to parse private message. Raw content:" << QString((char*)sptr->msg);
        return;
    }

    // 只有当前正在聊天的好友发来的消息才显示
    if (from == currentChatFriendId) {
        QString displayMsg = QString("[%1] %2: %3")
        .arg(QDateTime::currentDateTime().toString("hh:mm:ss"))
            .arg(currentChatFriendEmail)
            .arg(message);
        ui->chatContent->appendPlainText(displayMsg);
    } else {
        // 如果不是当前聊天对象，显示通知
        BubbleTips::showBubbleTips(QString("收到来自 %1 的消息").arg(from), 2, this);
    }
}
