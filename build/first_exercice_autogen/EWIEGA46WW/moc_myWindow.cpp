/****************************************************************************
** Meta object code from reading C++ file 'myWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../myWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myWindow_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myWindow_t qt_meta_stringdata_myWindow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myWindow"
QT_MOC_LITERAL(1, 9, 13), // "actionButton1"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "actionButton2"
QT_MOC_LITERAL(4, 38, 11), // "std::string"
QT_MOC_LITERAL(5, 50, 13), // "actionButton3"
QT_MOC_LITERAL(6, 64, 13), // "actionButton4"
QT_MOC_LITERAL(7, 78, 13), // "actionButton5"
QT_MOC_LITERAL(8, 92, 14), // "actionTextEdit"
QT_MOC_LITERAL(9, 107, 16), // "actionTextEdit_1"
QT_MOC_LITERAL(10, 124, 16), // "actionTextEdit_2"
QT_MOC_LITERAL(11, 141, 16) // "actionTextEdit_3"

    },
    "myWindow\0actionButton1\0\0actionButton2\0"
    "std::string\0actionButton3\0actionButton4\0"
    "actionButton5\0actionTextEdit\0"
    "actionTextEdit_1\0actionTextEdit_2\0"
    "actionTextEdit_3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       5,    0,   61,    2, 0x08 /* Private */,
       6,    0,   62,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 4,
    0x80000000 | 4,
    0x80000000 | 4,
    0x80000000 | 4,

       0        // eod
};

void myWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myWindow *_t = static_cast<myWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionButton1(); break;
        case 1: { std::string _r = _t->actionButton2();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 2: _t->actionButton3(); break;
        case 3: _t->actionButton4(); break;
        case 4: _t->actionButton5(); break;
        case 5: { std::string _r = _t->actionTextEdit();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 6: { std::string _r = _t->actionTextEdit_1();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 7: { std::string _r = _t->actionTextEdit_2();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 8: { std::string _r = _t->actionTextEdit_3();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject myWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_myWindow.data,
      qt_meta_data_myWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myWindow.stringdata0))
        return static_cast<void*>(const_cast< myWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int myWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
