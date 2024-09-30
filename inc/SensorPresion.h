#ifndef SENSOR_PRESION_H
#define SENSOR_PRESION_H

#include <cstdint>
#include "ISensor.h"

class SensorPresion : public ISensor{
public:
    void init() override;
    int32_t read() override;
};

#endif