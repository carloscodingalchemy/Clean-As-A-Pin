#include <cstdint>

/**
 * @brief Interface class for sensor objects.
 *
 * This class defines an interface for sensor objects that must implement
 * the functions init() and read().
 */
class ISensor {
 public:
  /**
   * @brief Pure virtual function for initializing the sensor.
   *
   * This function must be implemented by derived classes of ISensor.
   */
  virtual void init() = 0;

  /**
   * @brief Pure virtual function for reading data from the sensor.
   *
   * This function must be implemented by derived classes of ISensor.
   *
   * @return The data read from the sensor as a 32-bit integer.
   */
  virtual int32_t read() = 0;
};