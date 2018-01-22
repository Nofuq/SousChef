/****************************************************************************
** Meta object code from reading C++ file 'core.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/core.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Core_t {
    QByteArrayData data[9];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Core_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Core_t qt_meta_stringdata_Core = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Core"
QT_MOC_LITERAL(1, 5, 8), // "newOrder"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "data"
QT_MOC_LITERAL(4, 20, 11), // "deleteOrder"
QT_MOC_LITERAL(5, 32, 10), // "serveItems"
QT_MOC_LITERAL(6, 43, 11), // "updateOrder"
QT_MOC_LITERAL(7, 55, 7), // "lostCon"
QT_MOC_LITERAL(8, 63, 9) // "onClosing"

    },
    "Core\0newOrder\0\0data\0deleteOrder\0"
    "serveItems\0updateOrder\0lostCon\0onClosing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Core[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantList,    3,
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Core *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newOrder((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: _t->deleteOrder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->serveItems((*reinterpret_cast< QList<QVariant>(*)>(_a[1]))); break;
        case 3: _t->updateOrder((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 4: _t->lostCon(); break;
        case 5: _t->onClosing(); break;
        default: ;
        }
    }
}

const QMetaObject Core::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Core.data,
      qt_meta_data_Core,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Core::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Core.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
