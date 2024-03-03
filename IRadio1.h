#ifndef IRADIO1_H
#define IRADIO1_H
#include "geo.h"
#include "token.h"

class IRadio1{
    enum class BACKENDCONNECTIONPARAM { PARAMGET, PARAMSET };

public:
    virtual void disconnect() = 0;
    virtual std::vector<Token> exchange(std::unique_ptr<Geo> geo) = 0;
    virtual void connect() = 0;
};

#endif // IRADIO1_H
