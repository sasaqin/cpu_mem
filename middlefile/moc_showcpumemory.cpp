/****************************************************************************
** Meta object code from reading C++ file 'showcpumemory.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ComputerState/showcpumemory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showcpumemory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShowCPUMemory[] = {

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
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      36,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShowCPUMemory[] = {
    "ShowCPUMemory\0\0GetCPU()\0GetMemory()\0"
    "ReadData()\0"
};

void ShowCPUMemory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShowCPUMemory *_t = static_cast<ShowCPUMemory *>(_o);
        switch (_id) {
        case 0: _t->GetCPU(); break;
        case 1: _t->GetMemory(); break;
        case 2: _t->ReadData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShowCPUMemory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShowCPUMemory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ShowCPUMemory,
      qt_meta_data_ShowCPUMemory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShowCPUMemory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShowCPUMemory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShowCPUMemory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShowCPUMemory))
        return static_cast<void*>(const_cast< ShowCPUMemory*>(this));
    return QObject::qt_metacast(_clname);
}

int ShowCPUMemory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
