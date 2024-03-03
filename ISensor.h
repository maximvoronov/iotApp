#ifndef ISENSOR_H
#define ISENSOR_H
#include "Token.h"

class ISensor{
public:
    virtual Token read() = 0;

private:
    virtual Token input() = 0;

};


#endif // ISENSOR_H


