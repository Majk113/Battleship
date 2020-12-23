/****************************************************************************
** Meta object code from reading C++ file 'battleship.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Battleship/battleship.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battleship.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Battleship_t {
    QByteArrayData data[10];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Battleship_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Battleship_t qt_meta_stringdata_Battleship = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Battleship"
QT_MOC_LITERAL(1, 11, 7), // "slotFun"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "value"
QT_MOC_LITERAL(4, 26, 8), // "slotFun2"
QT_MOC_LITERAL(5, 35, 8), // "slotFun3"
QT_MOC_LITERAL(6, 44, 8), // "slotFun4"
QT_MOC_LITERAL(7, 53, 8), // "slotFun5"
QT_MOC_LITERAL(8, 62, 12), // "createServer"
QT_MOC_LITERAL(9, 75, 12) // "createClient"

    },
    "Battleship\0slotFun\0\0value\0slotFun2\0"
    "slotFun3\0slotFun4\0slotFun5\0createServer\0"
    "createClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Battleship[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Battleship::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Battleship *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotFun((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotFun2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotFun3(); break;
        case 3: _t->slotFun4(); break;
        case 4: _t->slotFun5(); break;
        case 5: _t->createServer(); break;
        case 6: _t->createClient(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Battleship::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Battleship.data,
    qt_meta_data_Battleship,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Battleship::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Battleship::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Battleship.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Battleship::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
