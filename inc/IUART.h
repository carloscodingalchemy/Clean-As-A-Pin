#ifndef IUART_H
#define IUART_H

#include <cstdint>

/**
 * @file IUART.h
 * @brief Defines the interface for UART communication.
 *
 * This header file declares the abstract class IUART, which serves as an
 * interface for UART communication. It contains pure virtual functions for
 * initializing and sending data over the UART communication interface. Derived
 * classes must implement these functions to provide specific UART communication
 * functionality.
 */
class IUART {
 public:
  /**
   * @brief Initializes the UART communication interface.
   *
   * This virtual function must be implemented by the derived class
   * to perform the necessary initialization steps for the UART communication.
   */
  virtual void init(void) = 0;

  /** @brief Sends data over the UART communication interface.
   *
   * This virtual function must be implemented by the derived class
   * to send the specified data over the UART communication interface.
   *
   * @param data The data to be sent.
   * @param len The length of the data to be sent.
   */
  virtual void send(std::string& data, size_t len) = 0;
}

#endif  // IUART_H