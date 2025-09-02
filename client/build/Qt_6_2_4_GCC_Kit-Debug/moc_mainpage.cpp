/****************************************************************************
** Meta object code from reading C++ file 'mainpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainPage_t {
    const uint offsetsAndSize[30];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainPage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainPage_t qt_meta_stringdata_MainPage = {
    {
QT_MOC_LITERAL(0, 8), // "MainPage"
QT_MOC_LITERAL(9, 14), // "mainPageClosed"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 8), // "newMunit"
QT_MOC_LITERAL(34, 24), // "std::shared_ptr<MsgUnit>"
QT_MOC_LITERAL(59, 5), // "munit"
QT_MOC_LITERAL(65, 13), // "clickTbfolder"
QT_MOC_LITERAL(79, 15), // "clickTbtransmit"
QT_MOC_LITERAL(95, 13), // "clickTbfriend"
QT_MOC_LITERAL(109, 13), // "clickTblogout"
QT_MOC_LITERAL(123, 14), // "clickTbsetting"
QT_MOC_LITERAL(138, 15), // "clickTbUserInfo"
QT_MOC_LITERAL(154, 7), // "sendMsg"
QT_MOC_LITERAL(162, 8), // "MsgUnit*"
QT_MOC_LITERAL(171, 7) // "recvMsg"

    },
    "MainPage\0mainPageClosed\0\0newMunit\0"
    "std::shared_ptr<MsgUnit>\0munit\0"
    "clickTbfolder\0clickTbtransmit\0"
    "clickTbfriend\0clickTblogout\0clickTbsetting\0"
    "clickTbUserInfo\0sendMsg\0MsgUnit*\0"
    "recvMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    1,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   78,    2, 0x08,    4 /* Private */,
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    0,   80,    2, 0x08,    6 /* Private */,
       9,    0,   81,    2, 0x08,    7 /* Private */,
      10,    0,   82,    2, 0x08,    8 /* Private */,
      11,    0,   83,    2, 0x08,    9 /* Private */,
      12,    1,   84,    2, 0x08,   10 /* Private */,
      14,    0,   87,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    5,
    QMetaType::Void,

       0        // eod
};

void MainPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mainPageClosed(); break;
        case 1: _t->newMunit((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 2: _t->clickTbfolder(); break;
        case 3: _t->clickTbtransmit(); break;
        case 4: _t->clickTbfriend(); break;
        case 5: _t->clickTblogout(); break;
        case 6: _t->clickTbsetting(); break;
        case 7: _t->clickTbUserInfo(); break;
        case 8: _t->sendMsg((*reinterpret_cast< std::add_pointer_t<MsgUnit*>>(_a[1]))); break;
        case 9: _t->recvMsg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainPage::mainPageClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainPage::newMunit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainPage.offsetsAndSize,
    qt_meta_data_MainPage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainPage_t
, QtPrivate::TypeAndForceComplete<MainPage, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MsgUnit *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainPage::mainPageClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainPage::newMunit(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
