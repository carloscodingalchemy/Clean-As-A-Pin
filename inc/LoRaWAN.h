#ifndef LORAWAN_H
#define LORAWAN_H

#include <cstdint>

class LoRaWAN {
public:
    void init();
    void enviarDatos(int32_t temperatura, int32_t presion, int32_t humedad);
};

#endif
