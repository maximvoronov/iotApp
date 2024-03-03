#ifndef RADIO2_H
#define RADIO2_H

//#include "token.h"
#include "IRadio2.h"

class Radio2 : public IRadio2
{
public:
    Radio2();
    Q_DISABLE_COPY_MOVE(Radio2);
    //Распростанять
    void propagate(Token& token);
    void propagate(std::unique_ptr<Token> token);
    //Выполнять
    void process(Token& token);
    void process(std::unique_ptr<Token> token);
};

#endif // RADIO2_H
