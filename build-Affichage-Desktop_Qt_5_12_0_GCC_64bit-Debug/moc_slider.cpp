/****************************************************************************
** Meta object code from reading C++ file 'slider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Affichage/slider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Slider_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Slider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Slider_t qt_meta_stringdata_Slider = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Slider"
QT_MOC_LITERAL(1, 7, 12), // "valueChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "ZoomXChanged"
QT_MOC_LITERAL(4, 34, 12), // "ZoomYChanged"
QT_MOC_LITERAL(5, 47, 14), // "ScrollXChanged"
QT_MOC_LITERAL(6, 62, 14), // "TriggerChanged"
QT_MOC_LITERAL(7, 77, 16) // "CheckBox_trigger"

    },
    "Slider\0valueChanged\0\0ZoomXChanged\0"
    "ZoomYChanged\0ScrollXChanged\0TriggerChanged\0"
    "CheckBox_trigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Slider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Slider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Slider *_t = static_cast<Slider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ZoomXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ZoomYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ScrollXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->TriggerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->CheckBox_trigger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::ZoomXChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::ZoomYChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::ScrollXChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::TriggerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Slider::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::CheckBox_trigger)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Slider::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Slider.data,
    qt_meta_data_Slider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Slider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Slider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Slider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Slider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Slider::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Slider::ZoomXChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Slider::ZoomYChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Slider::ScrollXChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Slider::TriggerChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Slider::CheckBox_trigger(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
