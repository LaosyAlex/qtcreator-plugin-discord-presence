/****************************************************************************
** Meta object code from reading C++ file 'cutediscordpresence.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../cutediscordpresence.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cutediscordpresence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
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
struct qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCreatorDRPC::QtCreatorDRPCPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCreatorDRPC::QtCreatorDRPCPlugin",
        "setDrpcNotEditingState",
        "",
        "syncDrpcToCurrentEditorState",
        "activateDiscordRichPresence",
        "deactivateDiscordRichPresence",
        "initializeControlMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setDrpcNotEditingState'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'syncDrpcToCurrentEditorState'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'activateDiscordRichPresence'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'deactivateDiscordRichPresence'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'initializeControlMenu'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtCreatorDRPCPlugin, qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCreatorDRPC::QtCreatorDRPCPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::IPlugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t>.metaTypes,
    nullptr
} };

void QtCreatorDRPC::QtCreatorDRPCPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtCreatorDRPCPlugin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setDrpcNotEditingState(); break;
        case 1: _t->syncDrpcToCurrentEditorState(); break;
        case 2: _t->activateDiscordRichPresence(); break;
        case 3: _t->deactivateDiscordRichPresence(); break;
        case 4: _t->initializeControlMenu(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QtCreatorDRPC::QtCreatorDRPCPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCreatorDRPC::QtCreatorDRPCPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QtCreatorDRPC19QtCreatorDRPCPluginE_t>.strings))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int QtCreatorDRPC::QtCreatorDRPCPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
using namespace QtCreatorDRPC;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_QtCreatorDRPCPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x21,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  't',  'C', 
    'r',  'e',  'a',  't',  'o',  'r',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x73,  'Q',  't',  'C',  'r',  'e',  'a', 
    't',  'o',  'r',  'D',  'R',  'P',  'C',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xab,  0x6d,  'C',  'o',  'm',  'p',  'a', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x65,  '1',  '.',  '0',  '.',  '0',  0x69,  'C', 
    'o',  'p',  'y',  'r',  'i',  'g',  'h',  't', 
    0x78,  0x19,  '(',  'C',  ')',  ' ',  '2',  '0', 
    '2',  '5',  ' ',  'E',  'd',  'u',  'a',  'r', 
    'd',  'o',  ' ',  'C',  'o',  'r',  'd',  'e', 
    'i',  'r',  'o',  0x6c,  'D',  'e',  'p',  'e', 
    'n',  'd',  'e',  'n',  'c',  'i',  'e',  's', 
    0x82,  0xa2,  0x62,  'I',  'd',  0x64,  'c',  'o', 
    'r',  'e',  0x67,  'V',  'e',  'r',  's',  'i', 
    'o',  'n',  0x66,  '1',  '8',  '.',  '0',  '.', 
    '1',  0xa2,  0x62,  'I',  'd',  0x6f,  'p',  'r', 
    'o',  'j',  'e',  'c',  't',  'e',  'x',  'p', 
    'l',  'o',  'r',  'e',  'r',  0x67,  'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x66,  '1',  '8', 
    '.',  '0',  '.',  '1',  0x6b,  'D',  'e',  's', 
    'c',  'r',  'i',  'p',  't',  'i',  'o',  'n', 
    0x81,  0x78,  0xc2,  'T',  'h',  'i',  's',  ' ', 
    'p',  'l',  'u',  'g',  'i',  'n',  ' ',  'a', 
    'd',  'd',  's',  ' ',  'D',  'i',  's',  'c', 
    'o',  'r',  'd',  ' ',  'R',  'i',  'c',  'h', 
    ' ',  'P',  'r',  'e',  's',  'e',  'n',  'c', 
    'e',  ' ',  's',  'u',  'p',  'p',  'o',  'r', 
    't',  ' ',  't',  'o',  ' ',  'Q',  't',  ' ', 
    'C',  'r',  'e',  'a',  't',  'o',  'r',  ',', 
    ' ',  'w',  'i',  't',  'h',  ' ',  'a',  ' ', 
    'd',  'e',  'c',  'e',  'n',  't',  ' ',  'c', 
    'h',  'u',  'n',  'k',  ' ',  'o',  'f',  ' ', 
    'r',  'e',  'c',  'o',  'g',  'n',  'i',  'z', 
    'e',  'd',  ' ',  'f',  'i',  'l',  'e',  ' ', 
    't',  'y',  'p',  'e',  's',  ',',  ' ',  'a', 
    'n',  'd',  ' ',  'h',  'a',  'n',  'd',  'm', 
    'a',  'd',  'e',  ' ',  'i',  'c',  'o',  'n', 
    's',  ' ',  'f',  'o',  'r',  ' ',  's',  'o', 
    'm',  'e',  ' ',  'o',  'f',  ' ',  't',  'h', 
    'e',  ' ',  'm',  'o',  'r',  'e',  ' ',  'o', 
    'b',  's',  'c',  'u',  'r',  'e',  ' ',  'f', 
    'i',  'l',  'e',  ' ',  't',  'y',  'p',  'e', 
    's',  ' ',  'w',  'i',  't',  'h',  'o',  'u', 
    't',  ' ',  'i',  'c',  'o',  'n',  's',  ' ', 
    'o',  'f',  ' ',  't',  'h',  'e',  'i',  'r', 
    ' ',  'o',  'w',  'n',  '.',  0x62,  'I',  'd', 
    0x75,  'c',  'u',  't',  'e',  '-',  'd',  'i', 
    's',  'c',  'o',  'r',  'd',  '-',  'p',  'r', 
    'e',  's',  'e',  'n',  'c',  'e',  0x67,  'L', 
    'i',  'c',  'e',  'n',  's',  'e',  0x81,  0x78, 
    0x1f,  'G',  'N',  'U',  ' ',  'G',  'e',  'n', 
    'e',  'r',  'a',  'l',  ' ',  'P',  'u',  'b', 
    'l',  'i',  'c',  ' ',  'L',  'i',  'c',  'e', 
    'n',  's',  'e',  ' ',  'v',  '3',  '.',  '0', 
    0x64,  'N',  'a',  'm',  'e',  0x75,  'C',  'u', 
    't',  'e',  ' ',  'D',  'i',  's',  'c',  'o', 
    'r',  'd',  ' ',  'P',  'r',  'e',  's',  'e', 
    'n',  'c',  'e',  0x63,  'U',  'r',  'l',  0x78, 
    0x3e,  'h',  't',  't',  'p',  's',  ':',  '/', 
    '/',  'g',  'i',  't',  'h',  'u',  'b',  '.', 
    'c',  'o',  'm',  '/',  'e',  'd',  'u',  'a', 
    'r',  'd',  'o',  'c',  '7',  '/',  'q',  't', 
    'c',  'r',  'e',  'a',  't',  'o',  'r',  '-', 
    'p',  'l',  'u',  'g',  'i',  'n',  '-',  'd', 
    'i',  's',  'c',  'o',  'r',  'd',  '-',  'p', 
    'r',  'e',  's',  'e',  'n',  'c',  'e',  0x66, 
    'V',  'e',  'n',  'd',  'o',  'r',  0x70,  'E', 
    'd',  'u',  'a',  'r',  'd',  'o',  ' ',  'C', 
    'o',  'r',  'd',  'e',  'i',  'r',  'o',  0x68, 
    'V',  'e',  'n',  'd',  'o',  'r',  'I',  'd', 
    0x69,  'e',  'd',  'u',  'a',  'r',  'd',  'o', 
    'c',  '7',  0x67,  'V',  'e',  'r',  's',  'i', 
    'o',  'n',  0x65,  '1',  '.',  '0',  '.',  '2', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(QtCreatorDRPC::QtCreatorDRPCPlugin, QtCreatorDRPCPlugin, qt_pluginMetaDataV2_QtCreatorDRPCPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_QtCreatorDRPCPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x21,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  't',  'C', 
    'r',  'e',  'a',  't',  'o',  'r',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x73,  'Q',  't',  'C',  'r',  'e',  'a', 
    't',  'o',  'r',  'D',  'R',  'P',  'C',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xab,  0x6d,  'C',  'o',  'm',  'p',  'a', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x65,  '1',  '.',  '0',  '.',  '0',  0x69,  'C', 
    'o',  'p',  'y',  'r',  'i',  'g',  'h',  't', 
    0x78,  0x19,  '(',  'C',  ')',  ' ',  '2',  '0', 
    '2',  '5',  ' ',  'E',  'd',  'u',  'a',  'r', 
    'd',  'o',  ' ',  'C',  'o',  'r',  'd',  'e', 
    'i',  'r',  'o',  0x6c,  'D',  'e',  'p',  'e', 
    'n',  'd',  'e',  'n',  'c',  'i',  'e',  's', 
    0x82,  0xa2,  0x62,  'I',  'd',  0x64,  'c',  'o', 
    'r',  'e',  0x67,  'V',  'e',  'r',  's',  'i', 
    'o',  'n',  0x66,  '1',  '8',  '.',  '0',  '.', 
    '1',  0xa2,  0x62,  'I',  'd',  0x6f,  'p',  'r', 
    'o',  'j',  'e',  'c',  't',  'e',  'x',  'p', 
    'l',  'o',  'r',  'e',  'r',  0x67,  'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x66,  '1',  '8', 
    '.',  '0',  '.',  '1',  0x6b,  'D',  'e',  's', 
    'c',  'r',  'i',  'p',  't',  'i',  'o',  'n', 
    0x81,  0x78,  0xc2,  'T',  'h',  'i',  's',  ' ', 
    'p',  'l',  'u',  'g',  'i',  'n',  ' ',  'a', 
    'd',  'd',  's',  ' ',  'D',  'i',  's',  'c', 
    'o',  'r',  'd',  ' ',  'R',  'i',  'c',  'h', 
    ' ',  'P',  'r',  'e',  's',  'e',  'n',  'c', 
    'e',  ' ',  's',  'u',  'p',  'p',  'o',  'r', 
    't',  ' ',  't',  'o',  ' ',  'Q',  't',  ' ', 
    'C',  'r',  'e',  'a',  't',  'o',  'r',  ',', 
    ' ',  'w',  'i',  't',  'h',  ' ',  'a',  ' ', 
    'd',  'e',  'c',  'e',  'n',  't',  ' ',  'c', 
    'h',  'u',  'n',  'k',  ' ',  'o',  'f',  ' ', 
    'r',  'e',  'c',  'o',  'g',  'n',  'i',  'z', 
    'e',  'd',  ' ',  'f',  'i',  'l',  'e',  ' ', 
    't',  'y',  'p',  'e',  's',  ',',  ' ',  'a', 
    'n',  'd',  ' ',  'h',  'a',  'n',  'd',  'm', 
    'a',  'd',  'e',  ' ',  'i',  'c',  'o',  'n', 
    's',  ' ',  'f',  'o',  'r',  ' ',  's',  'o', 
    'm',  'e',  ' ',  'o',  'f',  ' ',  't',  'h', 
    'e',  ' ',  'm',  'o',  'r',  'e',  ' ',  'o', 
    'b',  's',  'c',  'u',  'r',  'e',  ' ',  'f', 
    'i',  'l',  'e',  ' ',  't',  'y',  'p',  'e', 
    's',  ' ',  'w',  'i',  't',  'h',  'o',  'u', 
    't',  ' ',  'i',  'c',  'o',  'n',  's',  ' ', 
    'o',  'f',  ' ',  't',  'h',  'e',  'i',  'r', 
    ' ',  'o',  'w',  'n',  '.',  0x62,  'I',  'd', 
    0x75,  'c',  'u',  't',  'e',  '-',  'd',  'i', 
    's',  'c',  'o',  'r',  'd',  '-',  'p',  'r', 
    'e',  's',  'e',  'n',  'c',  'e',  0x67,  'L', 
    'i',  'c',  'e',  'n',  's',  'e',  0x81,  0x78, 
    0x1f,  'G',  'N',  'U',  ' ',  'G',  'e',  'n', 
    'e',  'r',  'a',  'l',  ' ',  'P',  'u',  'b', 
    'l',  'i',  'c',  ' ',  'L',  'i',  'c',  'e', 
    'n',  's',  'e',  ' ',  'v',  '3',  '.',  '0', 
    0x64,  'N',  'a',  'm',  'e',  0x75,  'C',  'u', 
    't',  'e',  ' ',  'D',  'i',  's',  'c',  'o', 
    'r',  'd',  ' ',  'P',  'r',  'e',  's',  'e', 
    'n',  'c',  'e',  0x63,  'U',  'r',  'l',  0x78, 
    0x3e,  'h',  't',  't',  'p',  's',  ':',  '/', 
    '/',  'g',  'i',  't',  'h',  'u',  'b',  '.', 
    'c',  'o',  'm',  '/',  'e',  'd',  'u',  'a', 
    'r',  'd',  'o',  'c',  '7',  '/',  'q',  't', 
    'c',  'r',  'e',  'a',  't',  'o',  'r',  '-', 
    'p',  'l',  'u',  'g',  'i',  'n',  '-',  'd', 
    'i',  's',  'c',  'o',  'r',  'd',  '-',  'p', 
    'r',  'e',  's',  'e',  'n',  'c',  'e',  0x66, 
    'V',  'e',  'n',  'd',  'o',  'r',  0x70,  'E', 
    'd',  'u',  'a',  'r',  'd',  'o',  ' ',  'C', 
    'o',  'r',  'd',  'e',  'i',  'r',  'o',  0x68, 
    'V',  'e',  'n',  'd',  'o',  'r',  'I',  'd', 
    0x69,  'e',  'd',  'u',  'a',  'r',  'd',  'o', 
    'c',  '7',  0x67,  'V',  'e',  'r',  's',  'i', 
    'o',  'n',  0x65,  '1',  '.',  '0',  '.',  '2', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QtCreatorDRPC::QtCreatorDRPCPlugin, QtCreatorDRPCPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
