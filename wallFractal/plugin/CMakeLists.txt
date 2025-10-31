add_definitions(-DTRANSLATION_DOMAIN=\"plasma_wallpaper_org.kde.plasma.wallfractal\")

add_library(wallfractalplugin SHARED wallfractalplugin.cpp)

target_link_libraries(wallfractalplugin
    KF6::I18n
    Qt6::Gui
    Qt6::Qml
)
install(TARGETS wallfractalplugin DESTINATION ${KDE_INSTALL_QMLDIR}/org/kde/plasma/private/wallfractal)
install(FILES qmldir DESTINATION ${KDE_INSTALL_QMLDIR}/org/kde/plasma/private/wallfractal)
