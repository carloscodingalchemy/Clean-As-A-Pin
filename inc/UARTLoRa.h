#ifndef UART_LORA_H
#define UART_LORA_H

#include <cstdint>
#include "IUART.h"

class UARTLoRa : public IUART{
public:
    void init();
    void send(std::string &data, size_t len);
};

#endif
