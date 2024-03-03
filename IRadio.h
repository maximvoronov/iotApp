#ifndef IRADIO_H
#define IRADIO_H
#include "geo.h"
#include "token.h"

namespace IRadio{
class IRadio1{
public:
    IRadio1();
    virtual void disconnect() = 0;
    virtual std::vector<Token> exchange(std::unique_ptr<Geo> geo) = 0;
    virtual void connect() = 0;
    };
class IRadio2{
public:
    IRadio2();
    virtual void propagate(std::unique_ptr<Token> token) = 0;
    virtual void process(std::unique_ptr<Token> token) = 0;
    };
};

#endif // IRADIO_H
