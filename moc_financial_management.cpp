/****************************************************************************
** Meta object code from reading C++ file 'financial_management.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/financial_management.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'financial_management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Financial_management_t {
    QByteArrayData data[10];
    char stringdata[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Financial_management_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Financial_management_t qt_meta_stringdata_Financial_management = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 17),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 18),
QT_MOC_LITERAL(4, 59, 17),
QT_MOC_LITERAL(5, 77, 21),
QT_MOC_LITERAL(6, 99, 20),
QT_MOC_LITERAL(7, 120, 22),
QT_MOC_LITERAL(8, 143, 5),
QT_MOC_LITERAL(9, 149, 20)
    },
    "Financial_management\0on_cancel_clicked\0"
    "\0on_refresh_clicked\0on_manage_clicked\0"
    "on_pushButton_clicked\0on_refresh_3_clicked\0"
    "on_lineEdit_textEdited\0valor\0"
    "on_refresh_2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Financial_management[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08,
       3,    0,   50,    2, 0x08,
       4,    0,   51,    2, 0x08,
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    1,   54,    2, 0x08,
       9,    0,   57,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void Financial_management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Financial_management *_t = static_cast<Financial_management *>(_o);
        switch (_id) {
        case 0: _t->on_cancel_clicked(); break;
        case 1: _t->on_refresh_clicked(); break;
        case 2: _t->on_manage_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_refresh_3_clicked(); break;
        case 5: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_refresh_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Financial_management::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Financial_management.data,
      qt_meta_data_Financial_management,  qt_static_metacall, 0, 0}
};


const QMetaObject *Financial_management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Financial_management::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Financial_management.stringdata))
        return static_cast<void*>(const_cast< Financial_management*>(this));
    return QDialog::qt_metacast(_clname);
}

int Financial_management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
