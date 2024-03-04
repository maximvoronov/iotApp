#ifndef RADIO1_H
#define RADIO1_H
#include "IRadio1.h"
#include "token.h"
#include "iot.h"
#include <vector>
#include <QObject>

class Radio1 :  public QObject, public IRadio1
{
   Q_OBJECT
   public:
    explicit Radio1();
    Q_DISABLE_COPY_MOVE(Radio1);
    void disconnect();
    std::vector<Token> exchange(std::unique_ptr<Geo> geo);
    void connect();
    int getMaxNeighbors() const noexcept;

private:
    std::vector<IOT> radio_messages;
    const int maxNeighbors = 10;
};

#endif // RADIO1_H
