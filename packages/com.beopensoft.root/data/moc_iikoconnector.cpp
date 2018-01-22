/****************************************************************************
** Meta object code from reading C++ file 'iikoconnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/iikoconnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iikoconnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IikoConnector_t {
    QByteArrayData data[17];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IikoConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IikoConnector_t qt_meta_stringdata_IikoConnector = {
    {
QT_MOC_LITERAL(0, 0, 13), // "IikoConnector"
QT_MOC_LITERAL(1, 14, 21), // "connectionEstablished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "connectionLost"
QT_MOC_LITERAL(4, 52, 6), // "rpcNew"
QT_MOC_LITERAL(5, 59, 4), // "data"
QT_MOC_LITERAL(6, 64, 9), // "rpcUpdate"
QT_MOC_LITERAL(7, 74, 9), // "rpcDelete"
QT_MOC_LITERAL(8, 84, 9), // "rpcServed"
QT_MOC_LITERAL(9, 94, 16), // "createConnection"
QT_MOC_LITERAL(10, 111, 6), // "rpcGet"
QT_MOC_LITERAL(11, 118, 8), // "rpcServe"
QT_MOC_LITERAL(12, 127, 7), // "orderId"
QT_MOC_LITERAL(13, 135, 10), // "productsId"
QT_MOC_LITERAL(14, 146, 9), // "onConnect"
QT_MOC_LITERAL(15, 156, 9), // "onMessage"
QT_MOC_LITERAL(16, 166, 3) // "msg"

    },
    "IikoConnector\0connectionEstablished\0"
    "\0connectionLost\0rpcNew\0data\0rpcUpdate\0"
    "rpcDelete\0rpcServed\0createConnection\0"
    "rpcGet\0rpcServe\0orderId\0productsId\0"
    "onConnect\0onMessage\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IikoConnector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   83,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x0a /* Public */,
      11,    2,   85,    2, 0x0a /* Public */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QVariantList,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void IikoConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IikoConnector *_t = static_cast<IikoConnector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionEstablished(); break;
        case 1: _t->connectionLost(); break;
        case 2: _t->rpcNew((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 3: _t->rpcUpdate((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 4: _t->rpcDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->rpcServed((*reinterpret_cast< QList<QVariant>(*)>(_a[1]))); break;
        case 6: _t->createConnection(); break;
        case 7: _t->rpcGet(); break;
        case 8: _t->rpcServe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 9: _t->onConnect(); break;
        case 10: _t->onMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (IikoConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IikoConnector::connectionEstablished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (IikoConnector::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IikoConnector::connectionLost)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (IikoConnector::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IikoConnector::rpcNew)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (IikoConnector::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IikoConnector::rpcUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (IikoConnector::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IikoConnector::rpcDelete)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (IikoConnector::*_t)(QList<QVariant> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IikoConnector::rpcServed)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject IikoConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IikoConnector.data,
      qt_meta_data_IikoConnector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IikoConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IikoConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IikoConnector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IikoConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void IikoConnector::connectionEstablished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IikoConnector::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void IikoConnector::rpcNew(QMap<QString,QVariant> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IikoConnector::rpcUpdate(QMap<QString,QVariant> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IikoConnector::rpcDelete(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void IikoConnector::rpcServed(QList<QVariant> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
