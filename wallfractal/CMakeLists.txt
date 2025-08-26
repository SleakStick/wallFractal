cmake_minimum_required(VERSION 3.16)

project(plasma-wallfractal)
 
find_package(ECM 1.4.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})
set(QT_MAJOR_VERSION 6 CACHE STRING "" FORCE)
set(INTERFACE_QT_MAJOR_VERSION 6 CACHE STRING "" FORCE)
set(QUERY_EXECUTABLE "/usr/bin/qmake" CACHE FILEPATH "" FORCE)

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)
include(FeatureSummary)

find_package(KF6 REQUIRED COMPONENTS I18n)
find_package(Plasma 6.0.0 REQUIRED)
find_package(Qt6 CONFIG REQUIRED COMPONENTS
    Qml
    Gui
    Core
)

# plasmoid
# TODO: adapt "org.kde.plasma" here & elsewhere if needed (see README)
plasma_install_package(package org.kde.plasma.wallfractal)

# qml extension plugin
add_subdirectory(plugin)

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
