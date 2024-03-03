#ifndef ACTUATOR_H
#define ACTUATOR_H
#include <memory>
#include "IActuator.h"

using namespace std;

class Actuator : public IActuator
{
public:
    Actuator();
    void write();
private:
    std::unique_ptr<Token> token;
};

#endif // ACTUATOR_H
