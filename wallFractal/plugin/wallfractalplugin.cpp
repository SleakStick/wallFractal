/*
    SPDX-FileCopyrightText: 2025 SleakStick <blueheaded@proton.me>
    SPDX-License-Identifier: LGPL-2.1-or-later
*/

#include "wallfractalplugin.h"

// KF
#include <KLocalizedString>
// Qt
#include <QJSEngine>
#include <QQmlEngine>
#include <QQmlContext>

static QJSValue singletonTypeExampleProvider(QQmlEngine* engine, QJSEngine* scriptEngine)
{
    Q_UNUSED(engine)

    QJSValue helloWorld = scriptEngine->newObject();
    helloWorld.setProperty(QStringLiteral("text"), i18n("Hello world!"));
    return helloWorld;
}


void wallFractalPlugin::registerTypes(const char* uri)
{
    qmlRegisterSingletonType(uri, 1, 0, "HelloWorld", singletonTypeExampleProvider);
}

#include "moc_wallfractalplugin.cpp"
