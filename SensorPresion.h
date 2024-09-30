#ifndef SENSOR_PRESION_H
#define SENSOR_PRESION_H

#include "ISensor.h"

class SensorPresion : public ISensor{
public:
    void init() override;
    int read() override;
};

#endif