/****************************************************************************
** Meta object code from reading C++ file 'motorctrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../motorctrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motorctrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MotorCtrl_t {
    QByteArrayData data[8];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MotorCtrl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MotorCtrl_t qt_meta_stringdata_MotorCtrl = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 11),
QT_MOC_LITERAL(4, 31, 10),
QT_MOC_LITERAL(5, 42, 7),
QT_MOC_LITERAL(6, 50, 13),
QT_MOC_LITERAL(7, 64, 16)
    },
    "MotorCtrl\0closing\0\0_closeMCoef\0"
    "_showMCoef\0myClose\0requestAction\0"
    "QEActionRequests"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MotorCtrl[] = {

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
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void MotorCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MotorCtrl *_t = static_cast<MotorCtrl *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->_closeMCoef(); break;
        case 2: _t->_showMCoef(); break;
        case 3: _t->myClose(); break;
        case 4: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            typedef void (MotorCtrl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MotorCtrl::closing)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MotorCtrl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MotorCtrl.data,
      qt_meta_data_MotorCtrl,  qt_static_metacall, 0, 0}
};


const QMetaObject *MotorCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MotorCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MotorCtrl.stringdata))
        return static_cast<void*>(const_cast< MotorCtrl*>(this));
    if (!strcmp(_clname, "Ui::MotorCtrl"))
        return static_cast< Ui::MotorCtrl*>(const_cast< MotorCtrl*>(this));
    return QDialog::qt_metacast(_clname);
}

int MotorCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MotorCtrl::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
