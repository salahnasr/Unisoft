/****************************************************************************
** Meta object code from reading C++ file 'sessions_management.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/sessions_management.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessions_management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sessions_management_t {
    QByteArrayData data[5];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_sessions_management_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_sessions_management_t qt_meta_stringdata_sessions_management = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 23),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 24),
QT_MOC_LITERAL(4, 70, 21)
    },
    "sessions_management\0on_button_close_clicked\0"
    "\0on_button_delete_clicked\0"
    "on_button_add_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sessions_management[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sessions_management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sessions_management *_t = static_cast<sessions_management *>(_o);
        switch (_id) {
        case 0: _t->on_button_close_clicked(); break;
        case 1: _t->on_button_delete_clicked(); break;
        case 2: _t->on_button_add_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject sessions_management::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_sessions_management.data,
      qt_meta_data_sessions_management,  qt_static_metacall, 0, 0}
};


const QMetaObject *sessions_management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sessions_management::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sessions_management.stringdata))
        return static_cast<void*>(const_cast< sessions_management*>(this));
    return QDialog::qt_metacast(_clname);
}

int sessions_management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE