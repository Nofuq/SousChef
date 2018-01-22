/****************************************************************************
** Meta object code from reading C++ file 'order.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/order.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'order.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Order_t {
    QByteArrayData data[14];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Order_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Order_t qt_meta_stringdata_Order = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Order"
QT_MOC_LITERAL(1, 6, 9), // "idChanged"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 2), // "id"
QT_MOC_LITERAL(4, 20, 15), // "tableNumChanged"
QT_MOC_LITERAL(5, 36, 8), // "tableNum"
QT_MOC_LITERAL(6, 45, 18), // "createdTimeChanged"
QT_MOC_LITERAL(7, 64, 11), // "createdTime"
QT_MOC_LITERAL(8, 76, 13), // "waiterChanged"
QT_MOC_LITERAL(9, 90, 6), // "waiter"
QT_MOC_LITERAL(10, 97, 5), // "setId"
QT_MOC_LITERAL(11, 103, 11), // "setTableNum"
QT_MOC_LITERAL(12, 115, 14), // "setCreatedTime"
QT_MOC_LITERAL(13, 130, 9) // "setWaiter"

    },
    "Order\0idChanged\0\0id\0tableNumChanged\0"
    "tableNum\0createdTimeChanged\0createdTime\0"
    "waiterChanged\0waiter\0setId\0setTableNum\0"
    "setCreatedTime\0setWaiter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Order[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QDateTime,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QDateTime,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QDateTime, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Order::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Order *_t = static_cast<Order *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->tableNumChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->createdTimeChanged((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 3: _t->waiterChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setTableNum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setCreatedTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 7: _t->setWaiter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Order::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Order::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Order::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Order::tableNumChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Order::*_t)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Order::createdTimeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Order::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Order::waiterChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Order *_t = static_cast<Order *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->tableNum(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->createdTime(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->waiter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Order *_t = static_cast<Order *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTableNum(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCreatedTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 3: _t->setWaiter(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Order::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Order.data,
      qt_meta_data_Order,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Order::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Order::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Order.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Order::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Order::idChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Order::tableNumChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Order::createdTimeChanged(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Order::waiterChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
