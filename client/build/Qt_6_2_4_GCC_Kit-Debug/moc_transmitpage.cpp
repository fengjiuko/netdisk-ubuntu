/****************************************************************************
** Meta object code from reading C++ file 'transmitpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../transmitpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transmitpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransmitPage_t {
    const uint offsetsAndSize[36];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TransmitPage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TransmitPage_t qt_meta_stringdata_TransmitPage = {
    {
QT_MOC_LITERAL(0, 12), // "TransmitPage"
QT_MOC_LITERAL(13, 8), // "_sendMsg"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 8), // "MsgUnit*"
QT_MOC_LITERAL(32, 5), // "munit"
QT_MOC_LITERAL(38, 6), // "getMsg"
QT_MOC_LITERAL(45, 24), // "std::shared_ptr<MsgUnit>"
QT_MOC_LITERAL(70, 4), // "sptr"
QT_MOC_LITERAL(75, 13), // "addUploadTask"
QT_MOC_LITERAL(89, 8), // "filepath"
QT_MOC_LITERAL(98, 8), // "diskPath"
QT_MOC_LITERAL(107, 8), // "WorkType"
QT_MOC_LITERAL(116, 2), // "wt"
QT_MOC_LITERAL(119, 15), // "addDownloadTask"
QT_MOC_LITERAL(135, 8), // "filesize"
QT_MOC_LITERAL(144, 18), // "clickUploadListBtn"
QT_MOC_LITERAL(163, 20), // "clickDownloadListBtn"
QT_MOC_LITERAL(184, 17) // "clickFinshListBtn"

    },
    "TransmitPage\0_sendMsg\0\0MsgUnit*\0munit\0"
    "getMsg\0std::shared_ptr<MsgUnit>\0sptr\0"
    "addUploadTask\0filepath\0diskPath\0"
    "WorkType\0wt\0addDownloadTask\0filesize\0"
    "clickUploadListBtn\0clickDownloadListBtn\0"
    "clickFinshListBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransmitPage[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   71,    2, 0x0a,    3 /* Public */,
       8,    3,   74,    2, 0x0a,    5 /* Public */,
       8,    2,   81,    2, 0x2a,    9 /* Public | MethodCloned */,
      13,    3,   86,    2, 0x0a,   12 /* Public */,
      13,    2,   93,    2, 0x2a,   16 /* Public | MethodCloned */,
      15,    0,   98,    2, 0x08,   19 /* Private */,
      16,    0,   99,    2, 0x08,   20 /* Private */,
      17,    0,  100,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11,    9,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, 0x80000000 | 11,    9,   14,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    9,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransmitPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransmitPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_sendMsg((*reinterpret_cast< std::add_pointer_t<MsgUnit*>>(_a[1]))); break;
        case 1: _t->getMsg((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MsgUnit>>>(_a[1]))); break;
        case 2: _t->addUploadTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<WorkType>>(_a[3]))); break;
        case 3: _t->addUploadTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->addDownloadTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<WorkType>>(_a[3]))); break;
        case 5: _t->addDownloadTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 6: _t->clickUploadListBtn(); break;
        case 7: _t->clickDownloadListBtn(); break;
        case 8: _t->clickFinshListBtn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransmitPage::*)(MsgUnit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitPage::_sendMsg)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TransmitPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TransmitPage.offsetsAndSize,
    qt_meta_data_TransmitPage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TransmitPage_t
, QtPrivate::TypeAndForceComplete<TransmitPage, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MsgUnit *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<MsgUnit>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<WorkType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<WorkType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TransmitPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransmitPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransmitPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TransmitPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TransmitPage::_sendMsg(MsgUnit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_UploadWorker_t {
    const uint offsetsAndSize[20];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_UploadWorker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_UploadWorker_t qt_meta_stringdata_UploadWorker = {
    {
QT_MOC_LITERAL(0, 12), // "UploadWorker"
QT_MOC_LITERAL(13, 6), // "cancel"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 5), // "pause"
QT_MOC_LITERAL(27, 14), // "updateProgress"
QT_MOC_LITERAL(42, 5), // "value"
QT_MOC_LITERAL(48, 9), // "workFinsh"
QT_MOC_LITERAL(58, 6), // "status"
QT_MOC_LITERAL(65, 6), // "taskId"
QT_MOC_LITERAL(72, 8) // "errorMsg"

    },
    "UploadWorker\0cancel\0\0pause\0updateProgress\0"
    "value\0workFinsh\0status\0taskId\0errorMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UploadWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    1,   46,    2, 0x06,    3 /* Public */,
       6,    3,   49,    2, 0x06,    5 /* Public */,
       6,    2,   56,    2, 0x26,    9 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void UploadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UploadWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->pause(); break;
        case 2: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->workFinsh((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->workFinsh((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UploadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadWorker::cancel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UploadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadWorker::pause)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UploadWorker::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadWorker::updateProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UploadWorker::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UploadWorker::workFinsh)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject UploadWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_UploadWorker.offsetsAndSize,
    qt_meta_data_UploadWorker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_UploadWorker_t
, QtPrivate::TypeAndForceComplete<UploadWorker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *UploadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UploadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UploadWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int UploadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UploadWorker::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UploadWorker::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UploadWorker::updateProgress(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UploadWorker::workFinsh(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_DownloadWorker_t {
    const uint offsetsAndSize[20];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DownloadWorker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DownloadWorker_t qt_meta_stringdata_DownloadWorker = {
    {
QT_MOC_LITERAL(0, 14), // "DownloadWorker"
QT_MOC_LITERAL(15, 6), // "cancel"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 5), // "pause"
QT_MOC_LITERAL(29, 14), // "updateProgress"
QT_MOC_LITERAL(44, 5), // "value"
QT_MOC_LITERAL(50, 9), // "workFinsh"
QT_MOC_LITERAL(60, 6), // "status"
QT_MOC_LITERAL(67, 6), // "taskId"
QT_MOC_LITERAL(74, 3) // "msg"

    },
    "DownloadWorker\0cancel\0\0pause\0"
    "updateProgress\0value\0workFinsh\0status\0"
    "taskId\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    1,   46,    2, 0x06,    3 /* Public */,
       6,    3,   49,    2, 0x06,    5 /* Public */,
       6,    2,   56,    2, 0x26,    9 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void DownloadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->pause(); break;
        case 2: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->workFinsh((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->workFinsh((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DownloadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadWorker::cancel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DownloadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadWorker::pause)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DownloadWorker::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadWorker::updateProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DownloadWorker::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadWorker::workFinsh)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject DownloadWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_DownloadWorker.offsetsAndSize,
    qt_meta_data_DownloadWorker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DownloadWorker_t
, QtPrivate::TypeAndForceComplete<DownloadWorker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *DownloadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DownloadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DownloadWorker::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DownloadWorker::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DownloadWorker::updateProgress(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DownloadWorker::workFinsh(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
