#ifndef SENSOR_H
#define SENSOR_H
#include "token.h"
#include <memory>
#include "ISensor.h"

using namespace std;

class Sensor : public ISensor
{
    //Q_OBJECT
public:
    Sensor();
    //std::unique_ptr<Token> read();

private:
    //std::unique_ptr<Token> input();

    //std::unique_ptr<Token> input();

private:
    std::unique_ptr<Token> token;
};

#endif // SENSOR_H
