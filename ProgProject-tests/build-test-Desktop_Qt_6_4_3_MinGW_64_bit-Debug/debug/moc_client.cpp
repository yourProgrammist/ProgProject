/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Client/client.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Client_t {
    uint offsetsAndSizes[20];
    char stringdata0[7];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[11];
    char stringdata8[17];
    char stringdata9[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Client_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Client_t qt_meta_stringdata_Client = {
    {
        QT_MOC_LITERAL(0, 6),  // "Client"
        QT_MOC_LITERAL(7, 8),  // "auth_msg"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 3),  // "msg"
        QT_MOC_LITERAL(21, 7),  // "reg_msg"
        QT_MOC_LITERAL(29, 8),  // "stat_msg"
        QT_MOC_LITERAL(38, 9),  // "check_msg"
        QT_MOC_LITERAL(48, 10),  // "check_role"
        QT_MOC_LITERAL(59, 16),  // "slotDisconnected"
        QT_MOC_LITERAL(76, 14)   // "slotClientRead"
    },
    "Client",
    "auth_msg",
    "",
    "msg",
    "reg_msg",
    "stat_msg",
    "check_msg",
    "check_role",
    "slotDisconnected",
    "slotClientRead"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Client[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,
       5,    1,   62,    2, 0x06,    5 /* Public */,
       6,    1,   65,    2, 0x06,    7 /* Public */,
       7,    1,   68,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   71,    2, 0x0a,   11 /* Public */,
       9,    0,   72,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Client.offsetsAndSizes,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Client_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Client, std::true_type>,
        // method 'auth_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'reg_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stat_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_role'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'slotDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotClientRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->auth_msg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->reg_msg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->stat_msg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->check_msg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->check_role((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->slotDisconnected(); break;
        case 6: _t->slotClientRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::auth_msg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::reg_msg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::stat_msg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::check_msg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (_t _q_method = &Client::check_role; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Client::auth_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Client::reg_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Client::stat_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Client::check_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Client::check_role(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
