qt6_add_qml_module(wallfractalplugin
    URI "org.kde.plasma.private.wallfractal"
    VERSION 1.0
    CLASS_NAME wallFractalPlugin
    OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/org/kde/plasma/private/wallfractal"
    SOURCES
        wallfractalplugin.cpp
        wallfractalplugin.h
)

target_link_libraries(wallfractalplugin
    PRIVATE
    KF6::I18n
    Qt6::Qml
    Qt6::Gui
    Plasma::Plasma
)

