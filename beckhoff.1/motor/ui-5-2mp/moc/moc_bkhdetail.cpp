/****************************************************************************
** Meta object code from reading C++ file 'bkhdetail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bkhdetail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bkhdetail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BkhDetail_t {
    QByteArrayData data[10];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BkhDetail_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BkhDetail_t qt_meta_stringdata_BkhDetail = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 13),
QT_MOC_LITERAL(4, 33, 16),
QT_MOC_LITERAL(5, 50, 14),
QT_MOC_LITERAL(6, 65, 15),
QT_MOC_LITERAL(7, 81, 10),
QT_MOC_LITERAL(8, 92, 10),
QT_MOC_LITERAL(9, 103, 7)
    },
    "BkhDetail\0closing\0\0requestAction\0"
    "QEActionRequests\0adcDacQEFReady\0"
    "couplerQEFReady\0_showDebug\0_showCoeff\0"
    "myClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BkhDetail[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BkhDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BkhDetail *_t = static_cast<BkhDetail *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 2: _t->adcDacQEFReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->couplerQEFReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->_showDebug(); break;
        case 5: _t->_showCoeff(); break;
        case 6: _t->myClose(); break;
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
            typedef void (BkhDetail::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BkhDetail::closing)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BkhDetail::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BkhDetail.data,
      qt_meta_data_BkhDetail,  qt_static_metacall, 0, 0}
};


const QMetaObject *BkhDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BkhDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BkhDetail.stringdata))
        return static_cast<void*>(const_cast< BkhDetail*>(this));
    if (!strcmp(_clname, "Ui::BkhDetail"))
        return static_cast< Ui::BkhDetail*>(const_cast< BkhDetail*>(this));
    return QDialog::qt_metacast(_clname);
}

int BkhDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BkhDetail::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
