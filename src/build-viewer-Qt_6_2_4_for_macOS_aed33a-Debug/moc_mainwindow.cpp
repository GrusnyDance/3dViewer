/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../viewer/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[62];
    char stringdata0[529];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 11), // "FilePressed"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 11), // "MovePressed"
QT_MOC_LITERAL(36, 13), // "RotatePressed"
QT_MOC_LITERAL(50, 12), // "ScalePressed"
QT_MOC_LITERAL(63, 9), // "screenJPG"
QT_MOC_LITERAL(73, 9), // "screenBMP"
QT_MOC_LITERAL(83, 8), // "pressGIF"
QT_MOC_LITERAL(92, 6), // "oneGif"
QT_MOC_LITERAL(99, 13), // "MoveUserInput"
QT_MOC_LITERAL(113, 15), // "RotateUserInput"
QT_MOC_LITERAL(129, 14), // "ScaleUserInput"
QT_MOC_LITERAL(144, 8), // "CallMove"
QT_MOC_LITERAL(153, 3), // "str"
QT_MOC_LITERAL(157, 3), // "val"
QT_MOC_LITERAL(161, 10), // "CallRotate"
QT_MOC_LITERAL(172, 13), // "updateSliders"
QT_MOC_LITERAL(186, 31), // "on_BackColorSlider_valueChanged"
QT_MOC_LITERAL(218, 5), // "value"
QT_MOC_LITERAL(224, 31), // "on_EdgeColorSlider_valueChanged"
QT_MOC_LITERAL(256, 31), // "on_VertColorSlider_valueChanged"
QT_MOC_LITERAL(288, 30), // "on_PerspectivePrButton_pressed"
QT_MOC_LITERAL(319, 24), // "on_OrthoPrButton_pressed"
QT_MOC_LITERAL(344, 26), // "on_SolidEdgeButton_pressed"
QT_MOC_LITERAL(371, 27), // "on_DashedEdgeButton_pressed"
QT_MOC_LITERAL(399, 30), // "on_EdgeSizeSlider_valueChanged"
QT_MOC_LITERAL(430, 23), // "on_CircleButton_pressed"
QT_MOC_LITERAL(454, 23), // "on_SquareButton_pressed"
QT_MOC_LITERAL(478, 19), // "on_NoButton_pressed"
QT_MOC_LITERAL(498, 30) // "on_VertSizeSlider_valueChanged"

    },
    "MainWindow\0FilePressed\0\0MovePressed\0"
    "RotatePressed\0ScalePressed\0screenJPG\0"
    "screenBMP\0pressGIF\0oneGif\0MoveUserInput\0"
    "RotateUserInput\0ScaleUserInput\0CallMove\0"
    "str\0val\0CallRotate\0updateSliders\0"
    "on_BackColorSlider_valueChanged\0value\0"
    "on_EdgeColorSlider_valueChanged\0"
    "on_VertColorSlider_valueChanged\0"
    "on_PerspectivePrButton_pressed\0"
    "on_OrthoPrButton_pressed\0"
    "on_SolidEdgeButton_pressed\0"
    "on_DashedEdgeButton_pressed\0"
    "on_EdgeSizeSlider_valueChanged\0"
    "on_CircleButton_pressed\0on_SquareButton_pressed\0"
    "on_NoButton_pressed\0on_VertSizeSlider_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    0,  172,    2, 0x08,    3 /* Private */,
       5,    0,  173,    2, 0x08,    4 /* Private */,
       6,    0,  174,    2, 0x08,    5 /* Private */,
       7,    0,  175,    2, 0x08,    6 /* Private */,
       8,    0,  176,    2, 0x08,    7 /* Private */,
       9,    0,  177,    2, 0x08,    8 /* Private */,
      10,    0,  178,    2, 0x08,    9 /* Private */,
      11,    0,  179,    2, 0x08,   10 /* Private */,
      12,    0,  180,    2, 0x08,   11 /* Private */,
      13,    2,  181,    2, 0x08,   12 /* Private */,
      16,    2,  186,    2, 0x08,   15 /* Private */,
      17,    0,  191,    2, 0x08,   18 /* Private */,
      18,    1,  192,    2, 0x08,   19 /* Private */,
      20,    1,  195,    2, 0x08,   21 /* Private */,
      21,    1,  198,    2, 0x08,   23 /* Private */,
      22,    0,  201,    2, 0x08,   25 /* Private */,
      23,    0,  202,    2, 0x08,   26 /* Private */,
      24,    0,  203,    2, 0x08,   27 /* Private */,
      25,    0,  204,    2, 0x08,   28 /* Private */,
      26,    1,  205,    2, 0x08,   29 /* Private */,
      27,    0,  208,    2, 0x08,   31 /* Private */,
      28,    0,  209,    2, 0x08,   32 /* Private */,
      29,    0,  210,    2, 0x08,   33 /* Private */,
      30,    1,  211,    2, 0x08,   34 /* Private */,

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
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->FilePressed(); break;
        case 1: _t->MovePressed(); break;
        case 2: _t->RotatePressed(); break;
        case 3: _t->ScalePressed(); break;
        case 4: _t->screenJPG(); break;
        case 5: _t->screenBMP(); break;
        case 6: _t->pressGIF(); break;
        case 7: _t->oneGif(); break;
        case 8: _t->MoveUserInput(); break;
        case 9: _t->RotateUserInput(); break;
        case 10: _t->ScaleUserInput(); break;
        case 11: _t->CallMove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->CallRotate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->updateSliders(); break;
        case 14: _t->on_BackColorSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_EdgeColorSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_VertColorSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_PerspectivePrButton_pressed(); break;
        case 18: _t->on_OrthoPrButton_pressed(); break;
        case 19: _t->on_SolidEdgeButton_pressed(); break;
        case 20: _t->on_DashedEdgeButton_pressed(); break;
        case 21: _t->on_EdgeSizeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_CircleButton_pressed(); break;
        case 23: _t->on_SquareButton_pressed(); break;
        case 24: _t->on_NoButton_pressed(); break;
        case 25: _t->on_VertSizeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
