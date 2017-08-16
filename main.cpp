#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <typeinfo>
#include <QQmlContext>
#include "Global/gameengine.h"


void launchGame(QQmlApplicationEngine& _engine);

int main(int argc, char *argv[])
{
    int result = -1;
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    std::thread gameThread(launchGame, std::ref(engine));
    result = app.exec();
    gameThread.join();

    return result;
}

void launchGame(QQmlApplicationEngine& _engine)
{
    QObject*     qmlWindow     = _engine.rootObjects()[0];
    QQmlContext* windowContext = _engine.rootContext();
    GameEngine* gameEngine     = new GameEngine();
    windowContext->setContextProperty("gameEngine", gameEngine);
    gameEngine->connect(gameEngine, SIGNAL(draw(QVariant, QVariant, QVariant, QVariant)), qmlWindow, SLOT(draw(QVariant, QVariant, QVariant, QVariant)));
    gameEngine->connect(gameEngine, SIGNAL(clear()), qmlWindow, SLOT(clearScreen()));
    gameEngine->connect(gameEngine, SIGNAL(gameOverMessage(QVariant)), qmlWindow, SLOT(gameOverMessage(QVariant)));
    gameEngine->startGame();
}
