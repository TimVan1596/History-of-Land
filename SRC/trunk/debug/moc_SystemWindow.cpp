/****************************************************************************
** Meta object code from reading C++ file 'SystemWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SystemWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemWindow_t {
    QByteArrayData data[9];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemWindow_t qt_meta_stringdata_SystemWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SystemWindow"
QT_MOC_LITERAL(1, 13, 13), // "sendModelData"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(4, 48, 18), // "on_Setings_clicked"
QT_MOC_LITERAL(5, 67, 15), // "on_Quit_clicked"
QT_MOC_LITERAL(6, 83, 20), // "on_BrawlGame_clicked"
QT_MOC_LITERAL(7, 104, 22), // "on_ClassicGame_clicked"
QT_MOC_LITERAL(8, 127, 21) // "on_freeLgends_clicked"

    },
    "SystemWindow\0sendModelData\0\0"
    "QStandardItemModel*\0on_Setings_clicked\0"
    "on_Quit_clicked\0on_BrawlGame_clicked\0"
    "on_ClassicGame_clicked\0on_freeLgends_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SystemWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemWindow *_t = static_cast<SystemWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendModelData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 1: _t->on_Setings_clicked(); break;
        case 2: _t->on_Quit_clicked(); break;
        case 3: _t->on_BrawlGame_clicked(); break;
        case 4: _t->on_ClassicGame_clicked(); break;
        case 5: _t->on_freeLgends_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SystemWindow::*_t)(QStandardItemModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SystemWindow::sendModelData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SystemWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SystemWindow.data,
      qt_meta_data_SystemWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SystemWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemWindow.stringdata0))
        return static_cast<void*>(const_cast< SystemWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SystemWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SystemWindow::sendModelData(QStandardItemModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
