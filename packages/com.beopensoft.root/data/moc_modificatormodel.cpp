/****************************************************************************
** Meta object code from reading C++ file 'modificatormodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/modificatormodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modificatormodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModificatorModel_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModificatorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModificatorModel_t qt_meta_stringdata_ModificatorModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ModificatorModel"
QT_MOC_LITERAL(1, 17, 6), // "search"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "productId"
QT_MOC_LITERAL(4, 35, 5), // "Roles"
QT_MOC_LITERAL(5, 41, 6), // "IDRole"
QT_MOC_LITERAL(6, 48, 13), // "ProductIDRole"
QT_MOC_LITERAL(7, 62, 15), // "ModificatorRole"
QT_MOC_LITERAL(8, 78, 10) // "AmountRole"

    },
    "ModificatorModel\0search\0\0productId\0"
    "Roles\0IDRole\0ProductIDRole\0ModificatorRole\0"
    "AmountRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModificatorModel[] = {

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
    QMetaType::QStringList, QMetaType::QString,    3,

 // enums: name, flags, count, data
       4, 0x0,    4,   26,

 // enum data: key, value
       5, uint(ModificatorModel::IDRole),
       6, uint(ModificatorModel::ProductIDRole),
       7, uint(ModificatorModel::ModificatorRole),
       8, uint(ModificatorModel::AmountRole),

       0        // eod
};

void ModificatorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModificatorModel *_t = static_cast<ModificatorModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->search((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject ModificatorModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ModificatorModel.data,
      qt_meta_data_ModificatorModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModificatorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModificatorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModificatorModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ModificatorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
