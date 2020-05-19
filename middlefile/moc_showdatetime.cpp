/****************************************************************************
** Meta object code from reading C++ file 'showdatetime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ComputerState/showdatetime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showdatetime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShowDateTime[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      28,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShowDateTime[] = {
    "ShowDateTime\0\0SetTimeInfo()\0ShowTime()\0"
};

void ShowDateTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShowDateTime *_t = static_cast<ShowDateTime *>(_o);
        switch (_id) {
        case 0: _t->SetTimeInfo(); break;
        case 1: _t->ShowTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShowDateTime::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShowDateTime::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ShowDateTime,
      qt_meta_data_ShowDateTime, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShowDateTime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShowDateTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShowDateTime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShowDateTime))
        return static_cast<void*>(const_cast< ShowDateTime*>(this));
    return QObject::qt_metacast(_clname);
}

int ShowDateTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
