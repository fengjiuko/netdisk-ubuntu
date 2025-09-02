/****************************************************************************
** Meta object code from reading C++ file 'folderpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../folderpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FolderPage_t {
    const uint offsetsAndSize[58];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FolderPage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FolderPage_t qt_meta_stringdata_FolderPage = {
    {
QT_MOC_LITERAL(0, 10), // "FolderPage"
QT_MOC_LITERAL(11, 23), // "getFolderContentRespond"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 24), // "std::shared_ptr<MsgUnit>"
QT_MOC_LITERAL(61, 4), // "sptr"
QT_MOC_LITERAL(66, 22), // "getCreateFolderRespond"
QT_MOC_LITERAL(89, 28), // "getDeleteFileOrFolderRespond"
QT_MOC_LITERAL(118, 28), // "getRenameFileOrFolderRespond"
QT_MOC_LITERAL(147, 20), // "getUploadFileRespond"
QT_MOC_LITERAL(168, 17), // "deliverUploadTask"
QT_MOC_LITERAL(186, 8), // "filepath"
QT_MOC_LITERAL(195, 8), // "diskPath"
QT_MOC_LITERAL(204, 19), // "deliverDownloadTask"
QT_MOC_LITERAL(224, 8), // "filesize"
QT_MOC_LITERAL(233, 8), // "_sendMsg"
QT_MOC_LITERAL(242, 8), // "MsgUnit*"
QT_MOC_LITERAL(251, 5), // "munit"
QT_MOC_LITERAL(257, 16), // "clickTbAddFolder"
QT_MOC_LITERAL(274, 13), // "clickTbDelete"
QT_MOC_LITERAL(288, 13), // "clickTbRename"
QT_MOC_LITERAL(302, 15), // "clickTbDownload"
QT_MOC_LITERAL(318, 13), // "clickTbUpload"
QT_MOC_LITERAL(332, 12), // "clickTbFlush"
QT_MOC_LITERAL(345, 12), // "clickTbShare"
QT_MOC_LITERAL(358, 11), // "clickTbBack"
QT_MOC_LITERAL(370, 15), // "itemDoubleClick"
QT_MOC_LITERAL(386, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(403, 4), // "item"
QT_MOC_LITERAL(408, 6) // "getMsg"

    },
    "FolderPage\0getFolderContentRespond\0\0"
    "std::shared_ptr<MsgUnit>\0sptr\0"
    "getCreateFolderRespond\0"
    "getDeleteFileOrFolderRespond\0"
    "getRenameFileOrFolderRespond\0"
    "getUploadFileRespond\0deliverUploadTask\0"
    "filepath\0diskPath\0deliverDownloadTask\0"
    "filesize\0_sendMsg\0MsgUnit*\0munit\0"
    "clickTbAddFolder\0clickTbDelete\0"
    "clickTbRename\0clickTbDownload\0"
    "clickTbUpload\0clickTbFlush\0clickTbShare\0"
    "clickTbBack\0itemDoubleClick\0"
    "QListWidgetItem*\0item\0getMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       5,    1,  125,    2, 0x06,    3 /* Public */,
       6,    1,  128,    2, 0x06,    5 /* Public */,
       7,    1,  131,    2, 0x06,    7 /* Public */,
       8,    1,  134,    2, 0x06,    9 /* Public */,
       9,    2,  137,    2, 0x06,   11 /* Public */,
      12,    2,  142,    2, 0x06,   14 /* Public */,
      14,    1,  147,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  150,    2, 0x08,   19 /* Private */,
      18,    0,  151,    2, 0x08,   20 /* Private */,
      19,    0,  152,    2, 0x08,   21 /* Private */,
      20,    0,  153,    2, 0x08,   22 /* Private */,
      21,    0,  154,    2, 0x08,   23 /* Private */,
      22,    0,  155,    2, 0x08,   24 /* Private */,
      23,    0,  156,    2, 0x08,   25 /* Private */,
      24,    0,  157,    2, 0x08,   26 /* Private */,
      25,    1,  158,    2, 0x08,   27 /* Private */,
      28,    1,  161,    2, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,   10,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void FolderPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getFolderContentRespond((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 1: _t->getCreateFolderRespond((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 2: _t->getDeleteFileOrFolderRespond((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 3: _t->getRenameFileOrFolderRespond((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 4: _t->getUploadFileRespond((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 5: _t->deliverUploadTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->deliverDownloadTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 7: _t->_sendMsg((*reinterpret_cast< std::add_pointer_t<MsgUnit*>>(_a[1]))); break;
        case 8: _t->clickTbAddFolder(); break;
        case 9: _t->clickTbDelete(); break;
        case 10: _t->clickTbRename(); break;
        case 11: _t->clickTbDownload(); break;
        case 12: _t->clickTbUpload(); break;
        case 13: _t->clickTbFlush(); break;
        case 14: _t->clickTbShare(); break;
        case 15: _t->clickTbBack(); break;
        case 16: _t->itemDoubleClick((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 17: _t->getMsg((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::getFolderContentRespond)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::getCreateFolderRespond)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::getDeleteFileOrFolderRespond)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::getRenameFileOrFolderRespond)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::getUploadFileRespond)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::deliverUploadTask)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(QString , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::deliverDownloadTask)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FolderPage::*)(MsgUnit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderPage::_sendMsg)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject FolderPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FolderPage.offsetsAndSize,
    qt_meta_data_FolderPage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FolderPage_t
, QtPrivate::TypeAndForceComplete<FolderPage, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MsgUnit *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>


>,
    nullptr
} };


const QMetaObject *FolderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FolderPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FolderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FolderPage::getFolderContentRespond(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FolderPage::getCreateFolderRespond(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FolderPage::getDeleteFileOrFolderRespond(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FolderPage::getRenameFileOrFolderRespond(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FolderPage::getUploadFileRespond(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FolderPage::deliverUploadTask(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FolderPage::deliverDownloadTask(QString _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FolderPage::_sendMsg(MsgUnit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
