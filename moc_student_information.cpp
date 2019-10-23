/****************************************************************************
** Meta object code from reading C++ file 'student_information.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/student_information.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student_information.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Student_information_t {
    QByteArrayData data[14];
    char stringdata[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Student_information_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Student_information_t qt_meta_stringdata_Student_information = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 18),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 17),
QT_MOC_LITERAL(4, 58, 13),
QT_MOC_LITERAL(5, 72, 13),
QT_MOC_LITERAL(6, 86, 27),
QT_MOC_LITERAL(7, 114, 33),
QT_MOC_LITERAL(8, 148, 32),
QT_MOC_LITERAL(9, 181, 29),
QT_MOC_LITERAL(10, 211, 27),
QT_MOC_LITERAL(11, 239, 33),
QT_MOC_LITERAL(12, 273, 31),
QT_MOC_LITERAL(13, 305, 26)
    },
    "Student_information\0Student_data_added\0"
    "\0on_cancel_clicked\0on_ok_clicked\0"
    "set_ok_enable\0on_Line_Age_editingFinished\0"
    "on_Line_firstName_editingFinished\0"
    "on_Line_lastName_editingFinished\0"
    "on_Line_Class_editingFinished\0"
    "on_line_CIN_editingFinished\0"
    "on_line_Telephone_editingFinished\0"
    "on_line_Adresse_editingFinished\0"
    "on_line_ID_editingFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Student_information[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08,
       4,    0,   76,    2, 0x08,
       5,    0,   77,    2, 0x08,
       6,    0,   78,    2, 0x08,
       7,    0,   79,    2, 0x08,
       8,    0,   80,    2, 0x08,
       9,    0,   81,    2, 0x08,
      10,    0,   82,    2, 0x08,
      11,    0,   83,    2, 0x08,
      12,    0,   84,    2, 0x08,
      13,    0,   85,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Student_information::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Student_information *_t = static_cast<Student_information *>(_o);
        switch (_id) {
        case 0: _t->Student_data_added(); break;
        case 1: _t->on_cancel_clicked(); break;
        case 2: _t->on_ok_clicked(); break;
        case 3: _t->set_ok_enable(); break;
        case 4: _t->on_Line_Age_editingFinished(); break;
        case 5: _t->on_Line_firstName_editingFinished(); break;
        case 6: _t->on_Line_lastName_editingFinished(); break;
        case 7: _t->on_Line_Class_editingFinished(); break;
        case 8: _t->on_line_CIN_editingFinished(); break;
        case 9: _t->on_line_Telephone_editingFinished(); break;
        case 10: _t->on_line_Adresse_editingFinished(); break;
        case 11: _t->on_line_ID_editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Student_information::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Student_information::Student_data_added)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Student_information::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Student_information.data,
      qt_meta_data_Student_information,  qt_static_metacall, 0, 0}
};


const QMetaObject *Student_information::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Student_information::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Student_information.stringdata))
        return static_cast<void*>(const_cast< Student_information*>(this));
    return QDialog::qt_metacast(_clname);
}

int Student_information::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Student_information::Student_data_added()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
