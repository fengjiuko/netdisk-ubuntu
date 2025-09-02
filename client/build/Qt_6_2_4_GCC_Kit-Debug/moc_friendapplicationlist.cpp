/****************************************************************************
** Meta object code from reading C++ file 'friendapplicationlist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../friendapplicationlist.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friendapplicationlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FriendApplicationList_t {
    const uint offsetsAndSize[24];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FriendApplicationList_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FriendApplicationList_t qt_meta_stringdata_FriendApplicationList = {
    {
QT_MOC_LITERAL(0, 21), // "FriendApplicationList"
QT_MOC_LITERAL(22, 17), // "getApplicaionList"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 12), // "verifyFriend"
QT_MOC_LITERAL(54, 5), // "regId"
QT_MOC_LITERAL(60, 4), // "flag"
QT_MOC_LITERAL(65, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(83, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(100, 4), // "item"
QT_MOC_LITERAL(105, 9), // "flushList"
QT_MOC_LITERAL(115, 24), // "std::shared_ptr<MsgUnit>"
QT_MOC_LITERAL(140, 4) // "sptr"

    },
    "FriendApplicationList\0getApplicaionList\0"
    "\0verifyFriend\0regId\0flag\0itemDoubleClicked\0"
    "QListWidgetItem*\0item\0flushList\0"
    "std::shared_ptr<MsgUnit>\0sptr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FriendApplicationList[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    2,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x08,    5 /* Private */,
       9,    1,   47,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void FriendApplicationList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FriendApplicationList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getApplicaionList(); break;
        case 1: _t->verifyFriend((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 3: _t->flushList((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FriendApplicationList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendApplicationList::getApplicaionList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FriendApplicationList::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FriendApplicationList::verifyFriend)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FriendApplicationList::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FriendApplicationList.offsetsAndSize,
    qt_meta_data_FriendApplicationList,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FriendApplicationList_t
, QtPrivate::TypeAndForceComplete<FriendApplicationList, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>


>,
    nullptr
} };


const QMetaObject *FriendApplicationList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendApplicationList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FriendApplicationList.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FriendApplicationList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FriendApplicationList::getApplicaionList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FriendApplicationList::verifyFriend(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
