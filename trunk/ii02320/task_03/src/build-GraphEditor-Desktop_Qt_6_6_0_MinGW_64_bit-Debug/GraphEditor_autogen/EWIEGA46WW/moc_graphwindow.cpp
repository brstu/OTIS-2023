/****************************************************************************
** Meta object code from reading C++ file 'graphwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GraphEditor/graphwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGraphWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGraphWindowENDCLASS = QtMocHelpers::stringData(
    "GraphWindow",
    "on_addVertPushButton_clicked",
    "",
    "on_addEdgePushButton_clicked",
    "updateEdgePosition",
    "updateOrEdgePosition",
    "updateLoopPosition",
    "QGraphicsEllipseItem*",
    "loop",
    "vertex",
    "QGraphicsTextItem*",
    "weight",
    "setColor",
    "color",
    "addActionWithColor",
    "QMenu*",
    "menu",
    "colorName",
    "on_renamePushButton_clicked",
    "on_deletePushButton_clicked",
    "on_colorPushButton_clicked",
    "on_comboBox_currentIndexChanged",
    "index",
    "on_savePushButton_clicked",
    "on_loadPushButton_clicked",
    "on_comboBox_2_activated",
    "createAdjacencyMatrix",
    "std::vector<std::vector<int>>",
    "createWeightMatrix",
    "createIncidenceMatrix",
    "complGraph",
    "isTree",
    "VEC2",
    "adjacencyMatrix",
    "start"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGraphWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[12];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[19];
    char stringdata5[21];
    char stringdata6[19];
    char stringdata7[22];
    char stringdata8[5];
    char stringdata9[7];
    char stringdata10[19];
    char stringdata11[7];
    char stringdata12[9];
    char stringdata13[6];
    char stringdata14[19];
    char stringdata15[7];
    char stringdata16[5];
    char stringdata17[10];
    char stringdata18[28];
    char stringdata19[28];
    char stringdata20[27];
    char stringdata21[32];
    char stringdata22[6];
    char stringdata23[26];
    char stringdata24[26];
    char stringdata25[24];
    char stringdata26[22];
    char stringdata27[30];
    char stringdata28[19];
    char stringdata29[22];
    char stringdata30[11];
    char stringdata31[7];
    char stringdata32[5];
    char stringdata33[16];
    char stringdata34[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGraphWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGraphWindowENDCLASS_t qt_meta_stringdata_CLASSGraphWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "GraphWindow"
        QT_MOC_LITERAL(12, 28),  // "on_addVertPushButton_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 28),  // "on_addEdgePushButton_clicked"
        QT_MOC_LITERAL(71, 18),  // "updateEdgePosition"
        QT_MOC_LITERAL(90, 20),  // "updateOrEdgePosition"
        QT_MOC_LITERAL(111, 18),  // "updateLoopPosition"
        QT_MOC_LITERAL(130, 21),  // "QGraphicsEllipseItem*"
        QT_MOC_LITERAL(152, 4),  // "loop"
        QT_MOC_LITERAL(157, 6),  // "vertex"
        QT_MOC_LITERAL(164, 18),  // "QGraphicsTextItem*"
        QT_MOC_LITERAL(183, 6),  // "weight"
        QT_MOC_LITERAL(190, 8),  // "setColor"
        QT_MOC_LITERAL(199, 5),  // "color"
        QT_MOC_LITERAL(205, 18),  // "addActionWithColor"
        QT_MOC_LITERAL(224, 6),  // "QMenu*"
        QT_MOC_LITERAL(231, 4),  // "menu"
        QT_MOC_LITERAL(236, 9),  // "colorName"
        QT_MOC_LITERAL(246, 27),  // "on_renamePushButton_clicked"
        QT_MOC_LITERAL(274, 27),  // "on_deletePushButton_clicked"
        QT_MOC_LITERAL(302, 26),  // "on_colorPushButton_clicked"
        QT_MOC_LITERAL(329, 31),  // "on_comboBox_currentIndexChanged"
        QT_MOC_LITERAL(361, 5),  // "index"
        QT_MOC_LITERAL(367, 25),  // "on_savePushButton_clicked"
        QT_MOC_LITERAL(393, 25),  // "on_loadPushButton_clicked"
        QT_MOC_LITERAL(419, 23),  // "on_comboBox_2_activated"
        QT_MOC_LITERAL(443, 21),  // "createAdjacencyMatrix"
        QT_MOC_LITERAL(465, 29),  // "std::vector<std::vector<int>>"
        QT_MOC_LITERAL(495, 18),  // "createWeightMatrix"
        QT_MOC_LITERAL(514, 21),  // "createIncidenceMatrix"
        QT_MOC_LITERAL(536, 10),  // "complGraph"
        QT_MOC_LITERAL(547, 6),  // "isTree"
        QT_MOC_LITERAL(554, 4),  // "VEC2"
        QT_MOC_LITERAL(559, 15),  // "adjacencyMatrix"
        QT_MOC_LITERAL(575, 5)   // "start"
    },
    "GraphWindow",
    "on_addVertPushButton_clicked",
    "",
    "on_addEdgePushButton_clicked",
    "updateEdgePosition",
    "updateOrEdgePosition",
    "updateLoopPosition",
    "QGraphicsEllipseItem*",
    "loop",
    "vertex",
    "QGraphicsTextItem*",
    "weight",
    "setColor",
    "color",
    "addActionWithColor",
    "QMenu*",
    "menu",
    "colorName",
    "on_renamePushButton_clicked",
    "on_deletePushButton_clicked",
    "on_colorPushButton_clicked",
    "on_comboBox_currentIndexChanged",
    "index",
    "on_savePushButton_clicked",
    "on_loadPushButton_clicked",
    "on_comboBox_2_activated",
    "createAdjacencyMatrix",
    "std::vector<std::vector<int>>",
    "createWeightMatrix",
    "createIncidenceMatrix",
    "complGraph",
    "isTree",
    "VEC2",
    "adjacencyMatrix",
    "start"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGraphWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x08,    1 /* Private */,
       3,    0,  135,    2, 0x08,    2 /* Private */,
       4,    0,  136,    2, 0x08,    3 /* Private */,
       5,    0,  137,    2, 0x08,    4 /* Private */,
       6,    3,  138,    2, 0x08,    5 /* Private */,
      12,    1,  145,    2, 0x08,    9 /* Private */,
      14,    3,  148,    2, 0x08,   11 /* Private */,
      18,    0,  155,    2, 0x08,   15 /* Private */,
      19,    0,  156,    2, 0x08,   16 /* Private */,
      20,    0,  157,    2, 0x08,   17 /* Private */,
      21,    1,  158,    2, 0x08,   18 /* Private */,
      23,    0,  161,    2, 0x08,   20 /* Private */,
      24,    0,  162,    2, 0x08,   21 /* Private */,
      25,    1,  163,    2, 0x08,   22 /* Private */,
      26,    0,  166,    2, 0x08,   24 /* Private */,
      28,    0,  167,    2, 0x08,   25 /* Private */,
      29,    0,  168,    2, 0x08,   26 /* Private */,
      30,    0,  169,    2, 0x08,   27 /* Private */,
      31,    2,  170,    2, 0x08,   28 /* Private */,
      31,    1,  175,    2, 0x28,   31 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void, QMetaType::QColor,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString, QMetaType::QColor,   16,   17,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 32, QMetaType::Int,   33,   34,
    QMetaType::Bool, 0x80000000 | 32,   33,

       0        // eod
};

Q_CONSTINIT const QMetaObject GraphWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGraphWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGraphWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGraphWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GraphWindow, std::true_type>,
        // method 'on_addVertPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addEdgePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateEdgePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateOrEdgePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLoopPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsEllipseItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsEllipseItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsTextItem *, std::false_type>,
        // method 'setColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'addActionWithColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'on_renamePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_colorPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_savePushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loadPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_2_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'createAdjacencyMatrix'
        QtPrivate::TypeAndForceComplete<std::vector<std::vector<int>>, std::false_type>,
        // method 'createWeightMatrix'
        QtPrivate::TypeAndForceComplete<std::vector<std::vector<int>>, std::false_type>,
        // method 'createIncidenceMatrix'
        QtPrivate::TypeAndForceComplete<std::vector<std::vector<int>>, std::false_type>,
        // method 'complGraph'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isTree'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const VEC2 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isTree'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const VEC2 &, std::false_type>
    >,
    nullptr
} };

void GraphWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addVertPushButton_clicked(); break;
        case 1: _t->on_addEdgePushButton_clicked(); break;
        case 2: _t->updateEdgePosition(); break;
        case 3: _t->updateOrEdgePosition(); break;
        case 4: _t->updateLoopPosition((*reinterpret_cast< std::add_pointer_t<QGraphicsEllipseItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGraphicsEllipseItem*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QGraphicsTextItem*>>(_a[3]))); break;
        case 5: _t->setColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 6: _t->addActionWithColor((*reinterpret_cast< std::add_pointer_t<QMenu*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[3]))); break;
        case 7: _t->on_renamePushButton_clicked(); break;
        case 8: _t->on_deletePushButton_clicked(); break;
        case 9: _t->on_colorPushButton_clicked(); break;
        case 10: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_savePushButton_clicked(); break;
        case 12: _t->on_loadPushButton_clicked(); break;
        case 13: _t->on_comboBox_2_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: { std::vector<std::vector<int>> _r = _t->createAdjacencyMatrix();
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<int>>*>(_a[0]) = std::move(_r); }  break;
        case 15: { std::vector<std::vector<int>> _r = _t->createWeightMatrix();
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<int>>*>(_a[0]) = std::move(_r); }  break;
        case 16: { std::vector<std::vector<int>> _r = _t->createIncidenceMatrix();
            if (_a[0]) *reinterpret_cast< std::vector<std::vector<int>>*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->complGraph();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->isTree((*reinterpret_cast< std::add_pointer_t<VEC2>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->isTree((*reinterpret_cast< std::add_pointer_t<VEC2>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsTextItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GraphWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGraphWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
