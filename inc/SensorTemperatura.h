#ifndef SENSOR_TEMPERATURA_H
#define SENSOR_TEMPERATURA_H

#include <cstdint>

#include "ISensor.h"

/**
 * @file SensorTemperatura.h
 * @brief Header file for the SensorTemperatura class, which inherits from
 * ISensor.
 */
class SensorTemperatura : public ISensor {
 public:
  /**
   * @brief Initializes the temperature sensor.
   */
  void init() override;

  /**
   * @brief Reads the temperature from the sensor.
   * @return The temperature reading as a 32-bit signed integer.
   */
  int32_t read() override;
};

#endif