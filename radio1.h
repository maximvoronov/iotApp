#ifndef RADIO1_H
#define RADIO1_H
#include "IRadio1.h"
#include "token.h"
#include <vector>




class Radio1 : public IRadio1
{
public:
    explicit Radio1();
    Q_DISABLE_COPY_MOVE(Radio1);
    //friend void sync();
    void disconnect();
    std::vector<Token> exchange(std::unique_ptr<Geo> geo);
    void connect();
    int getMaxNeighbors() const noexcept;

private:
    std::vector<IOT> radio_messages;
    const int maxNeighbors = 10;
};

#endif // RADIO1_H
