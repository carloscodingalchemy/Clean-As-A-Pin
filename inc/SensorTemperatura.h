#ifndef SENSOR_TEMPERATURA_H
#define SENSOR_TEMPERATURA_H

#include <cstdint>
#include "ISensor.h"

class SensorTemperatura : public ISensor{
public:
    void init() override;
    int32_t read() override;
};

#endif