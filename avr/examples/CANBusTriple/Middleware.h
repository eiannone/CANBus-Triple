
#ifndef CANMiddleware_H
#define CANMiddleware_H

#include <MessageQueue.h>


class Middleware
{
public:
    virtual void tick() {};
    virtual Message process(Message msg) { return msg; };
    virtual void commandHandler(byte* bytes, int length) {};
    Middleware(){};
    ~Middleware(){};
};

#endif

