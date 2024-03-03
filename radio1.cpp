#include "radio1.h"

Radio1::Radio1(){
}

void Radio1::disconnect(){

}

std::vector<Token> Radio1::exchange(std::unique_ptr<Geo> geo){
    std::vector<Token> token;
    return token;
}

void Radio1::connect(){

}

int Radio1::getMaxNeighbors() const noexcept{
    return maxNeighbors;
}
