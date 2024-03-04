#ifndef IOT_H
#define IOT_H
#include "token.h"
#include "sensor.h"
#include "actuator.h"
#include "geo.h"
#include <memory>
#include <QObject>

//using namespace rxcpp;
class Geo;

enum class IOT : int { RADIO1_STATE_ON, RADIO1_STATE_OFF, RADIO2_STATE_ON, RADIO2_STATE_OFF,
                       GEO_STATE_OK, GEO_STATE_ERROR, ACTUATOR_STATE_OK, ACTUATOR_STATE_OFF,
                       ACTUATOR_STATE_ERROR, SENSOR_STATE_OK, SENSOR_STATE_OFF,
                       SENSOR_STATE_ERROR, TOKEN_STATE_OK, IOT_STATE_ON, IOT_STATE_READY, IOT_STATE_OFF };

class Iot : public QObject{
    Q_OBJECT
public:
    Iot();
    void sync() noexcept;
    void propagate(std::unique_ptr<Sensor> sensor);
    void process(std::unique_ptr<Token> token);
    // put state above
    void putMessage(enum IOT message) noexcept;
    int getProcessCounter() const;
private:
    std::unique_ptr<Geo> geo;
    std::unique_ptr<Sensor> sensor;
    std::unique_ptr<Actuator> actuator;
    std::vector<enum IOT> messages;
    std::shared_ptr<std::vector<enum IOT>> mess_pointer;
    int process_counter;
public slots:
    void onSync();
};

#endif // IOT_H
