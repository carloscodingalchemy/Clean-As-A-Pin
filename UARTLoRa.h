#ifndef UART_LORA_H
#define UART_LORA_H

class UARTLoRa {
public:
    void init();
    void enviarComando(const char* comando);
};

#endif
