/****************************************************************************
** Meta object code from reading C++ file 'textoutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CIS202_Final-JohnTwedt/textoutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textoutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextOutput_t {
    QByteArrayData data[13];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextOutput_t qt_meta_stringdata_TextOutput = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TextOutput"
QT_MOC_LITERAL(1, 11, 8), // "sendHTML"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "text"
QT_MOC_LITERAL(4, 26, 9), // "clearHTML"
QT_MOC_LITERAL(5, 36, 18), // "listenSxMMatrixRdy"
QT_MOC_LITERAL(6, 55, 9), // "sxmMatrix"
QT_MOC_LITERAL(7, 65, 19), // "listenMxMAMatrixRdy"
QT_MOC_LITERAL(8, 85, 10), // "mxmAMatrix"
QT_MOC_LITERAL(9, 96, 19), // "listenMxMBMatrixRdy"
QT_MOC_LITERAL(10, 116, 10), // "mxmBmatrix"
QT_MOC_LITERAL(11, 127, 18), // "listenSxMScalarRdy"
QT_MOC_LITERAL(12, 146, 6) // "scalar"

    },
    "TextOutput\0sendHTML\0\0text\0clearHTML\0"
    "listenSxMMatrixRdy\0sxmMatrix\0"
    "listenMxMAMatrixRdy\0mxmAMatrix\0"
    "listenMxMBMatrixRdy\0mxmBmatrix\0"
    "listenSxMScalarRdy\0scalar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      11,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void TextOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextOutput *_t = static_cast<TextOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendHTML((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clearHTML(); break;
        case 2: _t->listenSxMMatrixRdy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->listenMxMAMatrixRdy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->listenMxMBMatrixRdy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->listenSxMScalarRdy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TextOutput::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextOutput::sendHTML)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TextOutput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextOutput::clearHTML)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TextOutput::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_TextOutput.data,
      qt_meta_data_TextOutput,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TextOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TextOutput.stringdata0))
        return static_cast<void*>(const_cast< TextOutput*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int TextOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
void TextOutput::sendHTML(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TextOutput::clearHTML()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
