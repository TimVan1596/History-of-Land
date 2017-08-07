/****************************************************************************
** Meta object code from reading C++ file 'Game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    QByteArrayData data[19];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Game"
QT_MOC_LITERAL(1, 5, 14), // "sendRecordData"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 21), // "on_action_N_triggered"
QT_MOC_LITERAL(4, 43, 21), // "on_action_S_triggered"
QT_MOC_LITERAL(5, 65, 23), // "on_action_A_2_triggered"
QT_MOC_LITERAL(6, 89, 24), // "on_action_quit_triggered"
QT_MOC_LITERAL(7, 114, 21), // "on_action_O_triggered"
QT_MOC_LITERAL(8, 136, 12), // "showFindText"
QT_MOC_LITERAL(9, 149, 25), // "on_actionfind_F_triggered"
QT_MOC_LITERAL(10, 175, 14), // "receiveEndGame"
QT_MOC_LITERAL(11, 190, 3), // "end"
QT_MOC_LITERAL(12, 194, 12), // "receiveclose"
QT_MOC_LITERAL(13, 207, 17), // "receiveLegendData"
QT_MOC_LITERAL(14, 225, 14), // "QList<QString>"
QT_MOC_LITERAL(15, 240, 23), // "on_DirectATKBTN_clicked"
QT_MOC_LITERAL(16, 264, 21), // "on_ThinRedBTN_clicked"
QT_MOC_LITERAL(17, 286, 19), // "on_ChiBiBTN_clicked"
QT_MOC_LITERAL(18, 306, 26) // "on_WinterRussiaBTN_clicked"

    },
    "Game\0sendRecordData\0\0on_action_N_triggered\0"
    "on_action_S_triggered\0on_action_A_2_triggered\0"
    "on_action_quit_triggered\0on_action_O_triggered\0"
    "showFindText\0on_actionfind_F_triggered\0"
    "receiveEndGame\0end\0receiveclose\0"
    "receiveLegendData\0QList<QString>\0"
    "on_DirectATKBTN_clicked\0on_ThinRedBTN_clicked\0"
    "on_ChiBiBTN_clicked\0on_WinterRussiaBTN_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   94,    2, 0x08 /* Private */,
       4,    0,   95,    2, 0x08 /* Private */,
       5,    0,   96,    2, 0x08 /* Private */,
       6,    0,   97,    2, 0x08 /* Private */,
       7,    0,   98,    2, 0x08 /* Private */,
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    1,  101,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    2,  107,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Game *_t = static_cast<Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendRecordData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->on_action_N_triggered(); break;
        case 2: _t->on_action_S_triggered(); break;
        case 3: _t->on_action_A_2_triggered(); break;
        case 4: _t->on_action_quit_triggered(); break;
        case 5: _t->on_action_O_triggered(); break;
        case 6: _t->showFindText(); break;
        case 7: _t->on_actionfind_F_triggered(); break;
        case 8: _t->receiveEndGame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->receiveclose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->receiveLegendData((*reinterpret_cast< QList<QString>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 11: _t->on_DirectATKBTN_clicked(); break;
        case 12: _t->on_ThinRedBTN_clicked(); break;
        case 13: _t->on_ChiBiBTN_clicked(); break;
        case 14: _t->on_WinterRussiaBTN_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Game::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Game::sendRecordData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Game::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Game.data,
      qt_meta_data_Game,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(const_cast< Game*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Game::sendRecordData(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
