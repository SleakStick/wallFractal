/****************************************************************************
** Meta object code from reading C++ file 'wallfractalplugin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../wallfractalplugin.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wallfractalplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.0. It"
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
struct qt_meta_tag_ZN17wallFractalPluginE_t {};
} // unnamed namespace

template <> constexpr inline auto wallFractalPlugin::qt_create_metaobjectdata<qt_meta_tag_ZN17wallFractalPluginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "wallFractalPlugin"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<wallFractalPlugin, qt_meta_tag_ZN17wallFractalPluginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject wallFractalPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QQmlExtensionPlugin::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17wallFractalPluginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17wallFractalPluginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17wallFractalPluginE_t>.metaTypes,
    nullptr
} };

void wallFractalPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<wallFractalPlugin *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *wallFractalPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wallFractalPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17wallFractalPluginE_t>.strings))
        return static_cast<void*>(this);
    return QQmlExtensionPlugin::qt_metacast(_clname);
}

int wallFractalPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlExtensionPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_wallFractalPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x28,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'Q',  'm', 
    'l',  'E',  'x',  't',  'e',  'n',  's',  'i', 
    'o',  'n',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e', 
    // "className"
    0x03,  0x71,  'w',  'a',  'l',  'l',  'F',  'r', 
    'a',  'c',  't',  'a',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(wallFractalPlugin, wallFractalPlugin, qt_pluginMetaDataV2_wallFractalPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_wallFractalPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x28,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'Q',  'm', 
    'l',  'E',  'x',  't',  'e',  'n',  's',  'i', 
    'o',  'n',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e', 
    // "className"
    0x03,  0x71,  'w',  'a',  'l',  'l',  'F',  'r', 
    'a',  'c',  't',  'a',  'l',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(wallFractalPlugin, wallFractalPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
