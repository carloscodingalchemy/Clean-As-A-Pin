#ifndef SENSOR_HUMEDAD_H
#define SENSOR_HUMEDAD_H

#include <cstdint>

#include "ISensor.h"

/**
 * @file SensorHumedad.h
 * @brief Declaration of the SensorHumedad class which inherits from ISensor.
 *
 * This file contains the declaration of the SensorHumedad class, which is a
 * concrete implementation of the ISensor interface. It provides methods to
 * initialize the sensor and read humidity values.
 */
class SensorHumedad : public ISensor {
 public:
  /**
   * @brief Initializes the sensor for humidity readings.
   *
   * This method is responsible for initializing the sensor for humidity
   * readings.
   */
  void init() override;
  /**
   * @brief Reads the humidity value from the sensor.
   *
   * This method is responsible for reading the humidity value from the sensor
   * and returning it as an int32_t.
   *
   * @return The humidity value read from the sensor as an int32_t.
   */
  int32_t read() override;
};

#endif