#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <radio1.h>
#include <radio2.h>
#include <iot.h>
#include "rxcpp/rx.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    const QUrl url(u"qrc:/IotApp/main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    std::unique_ptr<Radio1> radio1 = std::unique_ptr<Radio1>();
    std::unique_ptr<Iot> iot = std::make_unique<Iot>();

    iot.get()->sync();




    auto countRadio1Connections = rxcpp::observable<>::create<Radio1>(
        [](rxcpp::subscriber<std::unique_ptr<Iot>> iot )
        {
            iot.on_completed();



            //iot.on_next(1);
           // iot.on_next(2);
           // iot.on_completed();
        });
    /*
    countRadio1Connections.subscribe(
        [](Radio1 radio)
        {
            radio.connect();
        }
        );
*/

    std::unique_ptr<Radio2> radio2 = std::make_unique<Radio2>();

    return app.exec();
}
