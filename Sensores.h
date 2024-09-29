#ifndef SENSORES_H
#define SENSORES_H

class SensorHumedad {
public:
    void init();
    int leerHumedad();
};

class SensorPresion {
public:
    void init();
    int leerPresion();
};

class SensorTemperatura {
public:
    void init();
    int leerTemperatura();
};

#endif