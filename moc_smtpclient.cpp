/****************************************************************************
** Meta object code from reading C++ file 'smtpclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headers/SmtpClient/smtpclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SmtpClient_t {
    QByteArrayData data[12];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SmtpClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SmtpClient_t qt_meta_stringdata_SmtpClient = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 9),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 9),
QT_MOC_LITERAL(4, 32, 1),
QT_MOC_LITERAL(5, 34, 18),
QT_MOC_LITERAL(6, 53, 28),
QT_MOC_LITERAL(7, 82, 5),
QT_MOC_LITERAL(8, 88, 11),
QT_MOC_LITERAL(9, 100, 28),
QT_MOC_LITERAL(10, 129, 5),
QT_MOC_LITERAL(11, 135, 15)
    },
    "SmtpClient\0smtpError\0\0SmtpError\0e\0"
    "socketStateChanged\0QAbstractSocket::SocketState\0"
    "state\0socketError\0QAbstractSocket::SocketError\0"
    "error\0socketReadyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmtpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x09,
       8,    1,   40,    2, 0x09,
      11,    0,   43,    2, 0x09,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void SmtpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmtpClient *_t = static_cast<SmtpClient *>(_o);
        switch (_id) {
        case 0: _t->smtpError((*reinterpret_cast< SmtpError(*)>(_a[1]))); break;
        case 1: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 2: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->socketReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SmtpClient::*_t)(SmtpError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmtpClient::smtpError)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SmtpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SmtpClient.data,
      qt_meta_data_SmtpClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *SmtpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmtpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SmtpClient.stringdata))
        return static_cast<void*>(const_cast< SmtpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int SmtpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SmtpClient::smtpError(SmtpError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
