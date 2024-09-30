#ifndef IUART_H
#define IUART_H

#include <cstdint>

class IUART
{
public:
    virtual void init(void) = 0;
    virtual void send(std::string& data, size_t len) = 0;
};


#endif