/****************************************************************************
** Meta object code from reading C++ file 'modificator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/modificator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modificator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Modificator_t {
    QByteArrayData data[14];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Modificator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Modificator_t qt_meta_stringdata_Modificator = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Modificator"
QT_MOC_LITERAL(1, 12, 9), // "idChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "id"
QT_MOC_LITERAL(4, 26, 16), // "productIDChanged"
QT_MOC_LITERAL(5, 43, 9), // "productID"
QT_MOC_LITERAL(6, 53, 18), // "modificatorChanged"
QT_MOC_LITERAL(7, 72, 11), // "modificator"
QT_MOC_LITERAL(8, 84, 13), // "amountChanged"
QT_MOC_LITERAL(9, 98, 6), // "amount"
QT_MOC_LITERAL(10, 105, 5), // "setId"
QT_MOC_LITERAL(11, 111, 12), // "setProductID"
QT_MOC_LITERAL(12, 124, 14), // "setModificator"
QT_MOC_LITERAL(13, 139, 9) // "setAmount"

    },
    "Modificator\0idChanged\0\0id\0productIDChanged\0"
    "productID\0modificatorChanged\0modificator\0"
    "amountChanged\0amount\0setId\0setProductID\0"
    "setModificator\0setAmount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Modificator[] = {

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
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Modificator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Modificator *_t = static_cast<Modificator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->productIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->modificatorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->amountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setProductID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setModificator((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setAmount((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Modificator::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Modificator::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Modificator::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Modificator::productIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Modificator::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Modificator::modificatorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Modificator::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Modificator::amountChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Modificator *_t = static_cast<Modificator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->productID(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->modificator(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->amount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Modificator *_t = static_cast<Modificator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setProductID(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setModificator(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setAmount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Modificator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Modificator.data,
      qt_meta_data_Modificator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Modificator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Modificator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Modificator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Modificator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Modificator::idChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Modificator::productIDChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Modificator::modificatorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Modificator::amountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
