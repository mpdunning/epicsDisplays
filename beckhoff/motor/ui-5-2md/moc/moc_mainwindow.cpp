/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 13),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 16),
QT_MOC_LITERAL(4, 43, 9),
QT_MOC_LITERAL(5, 53, 9),
QT_MOC_LITERAL(6, 63, 13),
QT_MOC_LITERAL(7, 77, 13),
QT_MOC_LITERAL(8, 91, 10),
QT_MOC_LITERAL(9, 102, 10),
QT_MOC_LITERAL(10, 113, 13),
QT_MOC_LITERAL(11, 127, 13),
QT_MOC_LITERAL(12, 141, 11),
QT_MOC_LITERAL(13, 153, 11),
QT_MOC_LITERAL(14, 165, 13),
QT_MOC_LITERAL(15, 179, 13),
QT_MOC_LITERAL(16, 193, 14),
QT_MOC_LITERAL(17, 208, 14),
QT_MOC_LITERAL(18, 223, 14),
QT_MOC_LITERAL(19, 238, 14),
QT_MOC_LITERAL(20, 253, 11),
QT_MOC_LITERAL(21, 265, 11),
QT_MOC_LITERAL(22, 277, 11),
QT_MOC_LITERAL(23, 289, 6)
    },
    "MainWindow\0requestAction\0\0QEActionRequests\0"
    "_showCsrX\0_showCsrY\0_showControlX\0"
    "_showControlY\0_showHomeX\0_showHomeY\0"
    "_showFeatureX\0_showFeatureY\0_showMotorX\0"
    "_showMotorY\0_showReadRegX\0_showReadRegY\0"
    "_showWriteEEPX\0_showWriteEEPY\0"
    "_showWriteRamX\0_showWriteRamY\0_showAdcDac\0"
    "_showHidden\0_showBK9000\0myQuit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x08 /* Private */,
       4,    0,  122,    2, 0x08 /* Private */,
       5,    0,  123,    2, 0x08 /* Private */,
       6,    0,  124,    2, 0x08 /* Private */,
       7,    0,  125,    2, 0x08 /* Private */,
       8,    0,  126,    2, 0x08 /* Private */,
       9,    0,  127,    2, 0x08 /* Private */,
      10,    0,  128,    2, 0x08 /* Private */,
      11,    0,  129,    2, 0x08 /* Private */,
      12,    0,  130,    2, 0x08 /* Private */,
      13,    0,  131,    2, 0x08 /* Private */,
      14,    0,  132,    2, 0x08 /* Private */,
      15,    0,  133,    2, 0x08 /* Private */,
      16,    0,  134,    2, 0x08 /* Private */,
      17,    0,  135,    2, 0x08 /* Private */,
      18,    0,  136,    2, 0x08 /* Private */,
      19,    0,  137,    2, 0x08 /* Private */,
      20,    0,  138,    2, 0x08 /* Private */,
      21,    0,  139,    2, 0x08 /* Private */,
      22,    0,  140,    2, 0x08 /* Private */,
      23,    0,  141,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 1: _t->_showCsrX(); break;
        case 2: _t->_showCsrY(); break;
        case 3: _t->_showControlX(); break;
        case 4: _t->_showControlY(); break;
        case 5: _t->_showHomeX(); break;
        case 6: _t->_showHomeY(); break;
        case 7: _t->_showFeatureX(); break;
        case 8: _t->_showFeatureY(); break;
        case 9: _t->_showMotorX(); break;
        case 10: _t->_showMotorY(); break;
        case 11: _t->_showReadRegX(); break;
        case 12: _t->_showReadRegY(); break;
        case 13: _t->_showWriteEEPX(); break;
        case 14: _t->_showWriteEEPY(); break;
        case 15: _t->_showWriteRamX(); break;
        case 16: _t->_showWriteRamY(); break;
        case 17: _t->_showAdcDac(); break;
        case 18: _t->_showHidden(); break;
        case 19: _t->_showBK9000(); break;
        case 20: _t->myQuit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
