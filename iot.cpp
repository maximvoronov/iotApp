#include "iot.h"
Iot::Iot() : process_counter(0) {

    mess_pointer = std::make_shared<std::vector<enum IOT>>();
    putMessage(IOT::IOT_STATE_ON);
}

void Iot::propagate(std::unique_ptr<Sensor> sensor){
    putMessage(IOT::SENSOR_STATE_OK);
}

void Iot::process(std::unique_ptr<Token> token){
    putMessage(IOT::TOKEN_STATE_OK);

}

void Iot::putMessage(enum IOT message) noexcept {
    mess_pointer->insert(mess_pointer->begin(), message);
}

void Iot::sync() noexcept {
    process_counter++;
    putMessage(IOT::IOT_STATE_READY);
    printf("process_counter is: %d\n", process_counter);
}

void Iot::onSync(){
    sync();
    putMessage(IOT::RADIO1_STATE_ON);
}

int Iot::getProcessCounter() const{
    return process_counter;
}






