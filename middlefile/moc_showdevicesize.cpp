/****************************************************************************
** Meta object code from reading C++ file 'showdevicesize.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ComputerState/showdevicesize.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showdevicesize.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShowDeviceSize[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      39,   27,   15,   15, 0x08,
      92,   66,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShowDeviceSize[] = {
    "ShowDeviceSize\0\0ReadData()\0result,name\0"
    "CheckSize(QString,QString)\0"
    "name,use,free,all,percent\0"
    "InsertSize(QString,QString,QString,QString,int)\0"
};

void ShowDeviceSize::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShowDeviceSize *_t = static_cast<ShowDeviceSize *>(_o);
        switch (_id) {
        case 0: _t->ReadData(); break;
        case 1: _t->CheckSize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->InsertSize((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShowDeviceSize::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShowDeviceSize::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ShowDeviceSize,
      qt_meta_data_ShowDeviceSize, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShowDeviceSize::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShowDeviceSize::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShowDeviceSize::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShowDeviceSize))
        return static_cast<void*>(const_cast< ShowDeviceSize*>(this));
    return QObject::qt_metacast(_clname);
}

int ShowDeviceSize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
