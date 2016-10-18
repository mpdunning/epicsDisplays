/****************************************************************************
** Meta object code from reading C++ file 'bk9000.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../common/ui/bk9000.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bk9000.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BK9000_t {
    QByteArrayData data[8];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BK9000_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BK9000_t qt_meta_stringdata_BK9000 = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 7),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 13),
QT_MOC_LITERAL(4, 30, 16),
QT_MOC_LITERAL(5, 47, 12),
QT_MOC_LITERAL(6, 60, 7),
QT_MOC_LITERAL(7, 68, 10)
    },
    "BK9000\0closing\0\0requestAction\0"
    "QEActionRequests\0cplrQEFReady\0myClose\0"
    "_showDebug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BK9000[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BK9000::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BK9000 *_t = static_cast<BK9000 *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 2: _t->cplrQEFReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->myClose(); break;
        case 4: _t->_showDebug(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BK9000::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BK9000::closing)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BK9000::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BK9000.data,
      qt_meta_data_BK9000,  qt_static_metacall, 0, 0}
};


const QMetaObject *BK9000::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BK9000::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BK9000.stringdata))
        return static_cast<void*>(const_cast< BK9000*>(this));
    if (!strcmp(_clname, "Ui::BK9000"))
        return static_cast< Ui::BK9000*>(const_cast< BK9000*>(this));
    return QDialog::qt_metacast(_clname);
}

int BK9000::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BK9000::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
