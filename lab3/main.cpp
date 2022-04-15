#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <riverlist.h>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    RiverList viewModel; // модель для приложения

    QQmlApplicationEngine engine;  // движок для QML

    QQmlContext *context = engine.rootContext();    // получить корневой контекст модели
    context->setContextObject(&viewModel);          // установить в качестве корневой модели созданную модель для приложения
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
