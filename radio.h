#ifndef RADIO_H
#define RADIO_H

#include "token.h"
#include "geo.h"
#include <memory>


namespace radio{

enum class CONNECTIONPARAM : int { RADIO1, RADIO2 };

class Radio1
{
public:
    Radio1();
    void connect();
    void disconnect();
    Token exchange(Geo &geo);
    std::unique_ptr<Token> exchange(std::unique_ptr<Geo> geo);

    int getMaxNeighbors() const;

private:
    const int maxNeighbors = 10;
};

class Radio2
{
public:
    Radio2();
    //Распростанять
    void propagate(Token& token);
    void propagate(std::unique_ptr<Token> token);
    //
    void process(Token& token);
    void process(std::unique_ptr<Token> token);

};


};

#endif // RADIO_H
