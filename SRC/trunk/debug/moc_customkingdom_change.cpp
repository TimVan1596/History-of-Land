/****************************************************************************
** Meta object code from reading C++ file 'customkingdom_change.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../customkingdom_change.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customkingdom_change.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_customkingdom_Change_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_customkingdom_Change_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_customkingdom_Change_t qt_meta_stringdata_customkingdom_Change = {
    {
QT_MOC_LITERAL(0, 0, 20), // "customkingdom_Change"
QT_MOC_LITERAL(1, 21, 8), // "sendData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "MyState"
QT_MOC_LITERAL(4, 39, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(5, 57, 17), // "on_accept_clicked"
QT_MOC_LITERAL(6, 75, 22), // "on_DFSEdit_textChanged"
QT_MOC_LITERAL(7, 98, 4) // "arg1"

    },
    "customkingdom_Change\0sendData\0\0MyState\0"
    "on_cancel_clicked\0on_accept_clicked\0"
    "on_DFSEdit_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_customkingdom_Change[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void customkingdom_Change::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        customkingdom_Change *_t = static_cast<customkingdom_Change *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< MyState(*)>(_a[1]))); break;
        case 1: _t->on_cancel_clicked(); break;
        case 2: _t->on_accept_clicked(); break;
        case 3: _t->on_DFSEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (customkingdom_Change::*_t)(MyState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&customkingdom_Change::sendData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject customkingdom_Change::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_customkingdom_Change.data,
      qt_meta_data_customkingdom_Change,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *customkingdom_Change::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *customkingdom_Change::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_customkingdom_Change.stringdata0))
        return static_cast<void*>(const_cast< customkingdom_Change*>(this));
    return QDialog::qt_metacast(_clname);
}

int customkingdom_Change::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void customkingdom_Change::sendData(MyState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
