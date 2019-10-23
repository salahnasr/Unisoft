/****************************************************************************
** Meta object code from reading C++ file 'time_table_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/time_table_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'time_table_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Time_table_widget_t {
    QByteArrayData data[6];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Time_table_widget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Time_table_widget_t qt_meta_stringdata_Time_table_widget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 20),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 15),
QT_MOC_LITERAL(4, 56, 16),
QT_MOC_LITERAL(5, 73, 10)
    },
    "Time_table_widget\0TimeTableChangeSaved\0"
    "\0updateTimeTable\0SaveIntoDatabase\0"
    "Class_name\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Time_table_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a,
       4,    1,   31,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Time_table_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Time_table_widget *_t = static_cast<Time_table_widget *>(_o);
        switch (_id) {
        case 0: _t->TimeTableChangeSaved(); break;
        case 1: _t->updateTimeTable(); break;
        case 2: _t->SaveIntoDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Time_table_widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Time_table_widget::TimeTableChangeSaved)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Time_table_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Time_table_widget.data,
      qt_meta_data_Time_table_widget,  qt_static_metacall, 0, 0}
};


const QMetaObject *Time_table_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Time_table_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Time_table_widget.stringdata))
        return static_cast<void*>(const_cast< Time_table_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Time_table_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Time_table_widget::TimeTableChangeSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
