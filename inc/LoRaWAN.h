#ifndef LORAWAN_H
#define LORAWAN_H

class LoRaWAN {
public:
    void init();
    void enviarDatos(int temperatura, int presion, int humedad);
};

#endif
