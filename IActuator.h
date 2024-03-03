#ifndef IACTUATOR_H
#define IACTUATOR_H
#include "token.h"
#include <memory>

using namespace std;

class IActuator{
public:
    virtual void write() = 0;
private:
    virtual std::unique_ptr<Token> output() = 0;
};

#endif // IACTUATOR_H

