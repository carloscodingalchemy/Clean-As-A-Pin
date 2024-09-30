#ifndef SENSORE_HUMEDAD_H
#define SENSORE_HUMEDAD_H

#include "ISensor.h"

class SensorHumedad : public ISensor {
public:
    void init() override;
    int read() override;
};

#endif