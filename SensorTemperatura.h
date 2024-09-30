#ifndef SENSOR_TEMPERATURA_H
#define SENSOR_TEMPERATURA_H

class SensorTemperatura : public ISensor{
public:
    void init() override;
    int read() override;
};

#endif