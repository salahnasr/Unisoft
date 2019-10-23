/****************************************************************************
** Meta object code from reading C++ file 'teachers_management.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/teachers_management.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teachers_management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_teachers_management_t {
    QByteArrayData data[13];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_teachers_management_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_teachers_management_t qt_meta_stringdata_teachers_management = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 18),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 21),
QT_MOC_LITERAL(4, 62, 22),
QT_MOC_LITERAL(5, 85, 17),
QT_MOC_LITERAL(6, 103, 13),
QT_MOC_LITERAL(7, 117, 24),
QT_MOC_LITERAL(8, 142, 13),
QT_MOC_LITERAL(9, 156, 25),
QT_MOC_LITERAL(10, 182, 4),
QT_MOC_LITERAL(11, 187, 35),
QT_MOC_LITERAL(12, 223, 36)
    },
    "teachers_management\0Teacher_data_added\0"
    "\0on_Button_Add_clicked\0on_Button_Edit_clicked\0"
    "on_Cancel_clicked\0list_teachers\0"
    "on_Button_Delete_clicked\0on_Ok_clicked\0"
    "on_Line_Search_textEdited\0arg1\0"
    "on_Combo_Salary_currentIndexChanged\0"
    "on_combo_Session_currentIndexChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teachers_management[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    1,   71,    2, 0x08,
      11,    1,   74,    2, 0x08,
      12,    1,   77,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void teachers_management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        teachers_management *_t = static_cast<teachers_management *>(_o);
        switch (_id) {
        case 0: _t->Teacher_data_added(); break;
        case 1: _t->on_Button_Add_clicked(); break;
        case 2: _t->on_Button_Edit_clicked(); break;
        case 3: _t->on_Cancel_clicked(); break;
        case 4: _t->list_teachers(); break;
        case 5: _t->on_Button_Delete_clicked(); break;
        case 6: _t->on_Ok_clicked(); break;
        case 7: _t->on_Line_Search_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_Combo_Salary_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_combo_Session_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (teachers_management::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&teachers_management::Teacher_data_added)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject teachers_management::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_teachers_management.data,
      qt_meta_data_teachers_management,  qt_static_metacall, 0, 0}
};


const QMetaObject *teachers_management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teachers_management::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_teachers_management.stringdata))
        return static_cast<void*>(const_cast< teachers_management*>(this));
    return QDialog::qt_metacast(_clname);
}

int teachers_management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void teachers_management::Teacher_data_added()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
