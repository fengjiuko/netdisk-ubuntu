/****************************************************************************
** Meta object code from reading C++ file 'friendpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../friendpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friendpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FriendPage_t {
    const uint offsetsAndSize[38];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FriendPage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FriendPage_t qt_meta_stringdata_FriendPage = {
    {
QT_MOC_LITERAL(0, 10), // "FriendPage"
QT_MOC_LITERAL(11, 8), // "_sendMsg"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 8), // "MsgUnit*"
QT_MOC_LITERAL(30, 5), // "munit"
QT_MOC_LITERAL(36, 20), // "respondGetFriendList"
QT_MOC_LITERAL(57, 24), // "std::shared_ptr<MsgUnit>"
QT_MOC_LITERAL(82, 4), // "sptr"
QT_MOC_LITERAL(87, 27), // "respondGetFriendApplication"
QT_MOC_LITERAL(115, 13), // "respondSearch"
QT_MOC_LITERAL(129, 16), // "respondAddFriend"
QT_MOC_LITERAL(146, 13), // "respondVerify"
QT_MOC_LITERAL(160, 16), // "clickTbNewFriend"
QT_MOC_LITERAL(177, 13), // "clickTbSearch"
QT_MOC_LITERAL(191, 12), // "clickTbClear"
QT_MOC_LITERAL(204, 11), // "clickTbSend"
QT_MOC_LITERAL(216, 19), // "clickTbNotification"
QT_MOC_LITERAL(236, 22), // "clickTbFlushFriendList"
QT_MOC_LITERAL(259, 6) // "getMsg"

    },
    "FriendPage\0_sendMsg\0\0MsgUnit*\0munit\0"
    "respondGetFriendList\0std::shared_ptr<MsgUnit>\0"
    "sptr\0respondGetFriendApplication\0"
    "respondSearch\0respondAddFriend\0"
    "respondVerify\0clickTbNewFriend\0"
    "clickTbSearch\0clickTbClear\0clickTbSend\0"
    "clickTbNotification\0clickTbFlushFriendList\0"
    "getMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FriendPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       5,    1,   95,    2, 0x06,    3 /* Public */,
       8,    1,   98,    2, 0x06,    5 /* Public */,
       9,    1,  101,    2, 0x06,    7 /* Public */,
      10,    1,  104,    2, 0x06,    9 /* Public */,
      11,    1,  107,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  110,    2, 0x08,   13 /* Private */,
      13,    0,  111,    2, 0x08,   14 /* Private */,
      14,    0,  112,    2, 0x08,   15 /* Private */,
      15,    0,  113,    2, 0x08,   16 /* Private */,
      16,    0,  114,    2, 0x08,   17 /* Private */,
      17,    0,  115,    2, 0x08,   18 /* Private */,
      18,    1,  116,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void FriendPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FriendPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_sendMsg((*reinterpret_cast< std::add_pointer_t<MsgUnit*>>(_a[1]))); break;
        case 1: _t->respondGetFriendList((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 2: _t->respondGetFriendApplication((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 3: _t->respondSearch((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 4: _t->respondAddFriend((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 5: _t->respondVerify((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 6: _t->clickTbNewFriend(); break;
        case 7: _t->clickTbSearch(); break;
        case 8: _t->clickTbClear(); break;
        case 9: _t->clickTbSend(); break;
        case 10: _t->clickTbNotification(); break;
        case 11: _t->clickTbFlushFriendList(); break;
        case 12: _t->getMsg((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FriendPage::*)(MsgUnit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendPage::_sendMsg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FriendPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendPage::respondGetFriendList)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FriendPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendPage::respondGetFriendApplication)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FriendPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendPage::respondSearch)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FriendPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendPage::respondAddFriend)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FriendPage::*)(std::shared_ptr<MsgUnit> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendPage::respondVerify)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject FriendPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FriendPage.offsetsAndSize,
    qt_meta_data_FriendPage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FriendPage_t
, QtPrivate::TypeAndForceComplete<FriendPage, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MsgUnit *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>


>,
    nullptr
} };


const QMetaObject *FriendPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FriendPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FriendPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FriendPage::_sendMsg(MsgUnit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FriendPage::respondGetFriendList(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FriendPage::respondGetFriendApplication(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FriendPage::respondSearch(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FriendPage::respondAddFriend(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FriendPage::respondVerify(std::shared_ptr<MsgUnit> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
