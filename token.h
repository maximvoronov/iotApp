#ifndef TOKEN_H
#define TOKEN_H
#include <QObject>

enum class TokenMessage : int { TOKEN_GET, TOKEN_SEND };

class Token
{
public:
    explicit Token(int _counter);
private:
    int counter;
};

#endif // TOKEN_H
