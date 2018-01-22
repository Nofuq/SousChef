/****************************************************************************
** Meta object code from reading C++ file 'ordermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ordermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ordermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrderModel_t {
    QByteArrayData data[9];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrderModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrderModel_t qt_meta_stringdata_OrderModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OrderModel"
QT_MOC_LITERAL(1, 11, 6), // "search"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "orderId"
QT_MOC_LITERAL(4, 27, 5), // "Roles"
QT_MOC_LITERAL(5, 33, 6), // "IDRole"
QT_MOC_LITERAL(6, 40, 12), // "TableNumRole"
QT_MOC_LITERAL(7, 53, 15), // "CreatedTimeRole"
QT_MOC_LITERAL(8, 69, 10) // "WaiterRole"

    },
    "OrderModel\0search\0\0orderId\0Roles\0"
    "IDRole\0TableNumRole\0CreatedTimeRole\0"
    "WaiterRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrderModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString,    3,

 // enums: name, flags, count, data
       4, 0x0,    4,   26,

 // enum data: key, value
       5, uint(OrderModel::IDRole),
       6, uint(OrderModel::TableNumRole),
       7, uint(OrderModel::CreatedTimeRole),
       8, uint(OrderModel::WaiterRole),

       0        // eod
};

void OrderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrderModel *_t = static_cast<OrderModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariant _r = _t->search((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject OrderModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_OrderModel.data,
      qt_meta_data_OrderModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OrderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrderModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OrderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
