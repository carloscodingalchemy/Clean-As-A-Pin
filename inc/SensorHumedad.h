#ifndef SENSOR_HUMEDAD_H
#define SENSOR_HUMEDAD_H

#include <cstdint>
#include "ISensor.h"

class SensorHumedad : public ISensor {
public:
    void init() override;
    int32_t read() override;
};

#endif