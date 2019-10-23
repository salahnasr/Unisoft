/****************************************************************************
** Meta object code from reading C++ file 'student_management.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/student_management.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student_management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Student_management_t {
    QByteArrayData data[14];
    char stringdata[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Student_management_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Student_management_t qt_meta_stringdata_Student_management = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 13),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 21),
QT_MOC_LITERAL(4, 56, 22),
QT_MOC_LITERAL(5, 79, 17),
QT_MOC_LITERAL(6, 97, 34),
QT_MOC_LITERAL(7, 132, 5),
QT_MOC_LITERAL(8, 138, 38),
QT_MOC_LITERAL(9, 177, 24),
QT_MOC_LITERAL(10, 202, 25),
QT_MOC_LITERAL(11, 228, 4),
QT_MOC_LITERAL(12, 233, 13),
QT_MOC_LITERAL(13, 247, 34)
    },
    "Student_management\0list_students\0\0"
    "on_Button_Add_clicked\0on_Button_Edit_clicked\0"
    "on_cancel_clicked\0on_Combo_level_currentIndexChanged\0"
    "index\0on_Combo_specialty_currentIndexChanged\0"
    "on_Button_Delete_clicked\0"
    "on_Line_Search_textEdited\0arg1\0"
    "on_ok_clicked\0on_combo_class_currentIndexChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Student_management[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    1,   68,    2, 0x08,
       8,    1,   71,    2, 0x08,
       9,    0,   74,    2, 0x08,
      10,    1,   75,    2, 0x08,
      12,    0,   78,    2, 0x08,
      13,    1,   79,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Student_management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Student_management *_t = static_cast<Student_management *>(_o);
        switch (_id) {
        case 0: _t->list_students(); break;
        case 1: _t->on_Button_Add_clicked(); break;
        case 2: _t->on_Button_Edit_clicked(); break;
        case 3: _t->on_cancel_clicked(); break;
        case 4: _t->on_Combo_level_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Combo_specialty_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Button_Delete_clicked(); break;
        case 7: _t->on_Line_Search_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_ok_clicked(); break;
        case 9: _t->on_combo_class_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Student_management::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Student_management.data,
      qt_meta_data_Student_management,  qt_static_metacall, 0, 0}
};


const QMetaObject *Student_management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Student_management::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Student_management.stringdata))
        return static_cast<void*>(const_cast< Student_management*>(this));
    return QDialog::qt_metacast(_clname);
}

int Student_management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
