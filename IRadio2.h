#ifndef IRADIO2_H
#define IRADIO2_H
#include "geo.h"
#include "token.h"

class IRadio2{
public:
    virtual void propagate(std::unique_ptr<Token> token) = 0;
    virtual void process(std::unique_ptr<Token> token) = 0;
};

#endif // IRADIO2_H
