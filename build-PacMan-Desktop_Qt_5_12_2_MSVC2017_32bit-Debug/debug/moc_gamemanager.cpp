/****************************************************************************
** Meta object code from reading C++ file 'gamemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gamemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameManager_t {
    QByteArrayData data[13];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameManager_t qt_meta_stringdata_GameManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GameManager"
QT_MOC_LITERAL(1, 12, 7), // "newGame"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "quitGame"
QT_MOC_LITERAL(4, 30, 9), // "pauseGame"
QT_MOC_LITERAL(5, 40, 10), // "resumeGame"
QT_MOC_LITERAL(6, 51, 10), // "goMainMenu"
QT_MOC_LITERAL(7, 62, 13), // "keyPressEvent"
QT_MOC_LITERAL(8, 76, 10), // "QKeyEvent*"
QT_MOC_LITERAL(9, 87, 5), // "event"
QT_MOC_LITERAL(10, 93, 11), // "eventFilter"
QT_MOC_LITERAL(11, 105, 3), // "obj"
QT_MOC_LITERAL(12, 109, 7) // "QEvent*"

    },
    "GameManager\0newGame\0\0quitGame\0pauseGame\0"
    "resumeGame\0goMainMenu\0keyPressEvent\0"
    "QKeyEvent*\0event\0eventFilter\0obj\0"
    "QEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameManager[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
      10,    2,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 12,   11,    9,

       0        // eod
};

void GameManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newGame(); break;
        case 1: _t->quitGame(); break;
        case 2: _t->pauseGame(); break;
        case 3: _t->resumeGame(); break;
        case 4: _t->goMainMenu(); break;
        case 5: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameManager::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_GameManager.data,
    qt_meta_data_GameManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameManager.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int GameManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
