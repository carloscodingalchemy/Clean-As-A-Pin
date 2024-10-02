#ifndef SENSOR_PRESION_H
#define SENSOR_PRESION_H

#include <cstdint>

#include "ISensor.h"

/**
 * @file SensorPresion.h
 * @brief Declaration of the SensorPresion class, which inherits from ISensor.
 *
 * This class represents a pressure sensor that implements the ISensor
 * interface. It provides the functionality to initialize the sensor and read
 * pressure data.
 */

class SensorPresion : public ISensor {
 public:
  /**
   * @brief Initializes the pressure sensor.
   *
   * This function overrides the init() method from ISensor and is responsible
   * for initializing the pressure sensor. It should be called before attempting
   * to read pressure data from the sensor.
   */
  void init() override;

  /**
   * @brief Reads the pressure data from the sensor.
   *
   * This function overrides the read() method from ISensor and is responsible
   * for reading pressure data from the sensor.
   *
   * @return The pressure data read from the sensor as a 32-bit signed integer.
   */
  int32_t read() override;
};

#endif