#include "actuator.h"

Actuator::Actuator() {
    token = std::unique_ptr<Token>();
}

void Actuator::write(){

}
/*
std::unique_ptr<Token> IActuator::output(){
    return token;
}


*/
