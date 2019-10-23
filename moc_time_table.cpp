/****************************************************************************
** Meta object code from reading C++ file 'time_table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/time_table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'time_table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Time_Table_t {
    QByteArrayData data[14];
    char stringdata[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Time_Table_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Time_Table_t qt_meta_stringdata_Time_Table = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 19),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 24),
QT_MOC_LITERAL(4, 57, 34),
QT_MOC_LITERAL(5, 92, 5),
QT_MOC_LITERAL(6, 98, 38),
QT_MOC_LITERAL(7, 137, 34),
QT_MOC_LITERAL(8, 172, 24),
QT_MOC_LITERAL(9, 197, 24),
QT_MOC_LITERAL(10, 222, 22),
QT_MOC_LITERAL(11, 245, 26),
QT_MOC_LITERAL(12, 272, 27),
QT_MOC_LITERAL(13, 300, 30)
    },
    "Time_Table\0TimeTableHasChanged\0\0"
    "on_Button_export_clicked\0"
    "on_combo_level_currentIndexChanged\0"
    "index\0on_Combo_specialty_currentIndexChanged\0"
    "on_combo_class_currentIndexChanged\0"
    "on_Button_Cancel_clicked\0"
    "on_Button_Accept_clicked\0"
    "on_Button_mail_clicked\0"
    "on_Button_sessions_clicked\0"
    "on_Button_add_class_clicked\0"
    "on_Button_delete_class_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Time_Table[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08,
       4,    1,   71,    2, 0x08,
       6,    1,   74,    2, 0x08,
       7,    1,   77,    2, 0x08,
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
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Time_Table::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Time_Table *_t = static_cast<Time_Table *>(_o);
        switch (_id) {
        case 0: _t->TimeTableHasChanged(); break;
        case 1: _t->on_Button_export_clicked(); break;
        case 2: _t->on_combo_level_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Combo_specialty_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_combo_class_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Button_Cancel_clicked(); break;
        case 6: _t->on_Button_Accept_clicked(); break;
        case 7: _t->on_Button_mail_clicked(); break;
        case 8: _t->on_Button_sessions_clicked(); break;
        case 9: _t->on_Button_add_class_clicked(); break;
        case 10: _t->on_Button_delete_class_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Time_Table::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Time_Table::TimeTableHasChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Time_Table::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Time_Table.data,
      qt_meta_data_Time_Table,  qt_static_metacall, 0, 0}
};


const QMetaObject *Time_Table::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Time_Table::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Time_Table.stringdata))
        return static_cast<void*>(const_cast< Time_Table*>(this));
    return QDialog::qt_metacast(_clname);
}

int Time_Table::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Time_Table::TimeTableHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
