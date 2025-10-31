/*
    SPDX-FileCopyrightText: 2025 SleakStick <blueheaded@proton.me>
    SPDX-License-Identifier: LGPL-2.1-or-later
*/

#ifndef WALLFRACTALPLUGIN_H
#define WALLFRACTALPLUGIN_H

#include <QQmlExtensionPlugin>

class wallFractalPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri) override;
};

#endif // WALLFRACTALPLUGIN_H
