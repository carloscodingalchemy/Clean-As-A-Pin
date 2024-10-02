#ifndef UART_LORA_H
#define UART_LORA_H

#include <cstdint>
#include <string>

#include "IUART.h"

/**
 * @brief A class that represents a LoRa UART communication interface that
 * inherits from the IUART interface.
 */
class UARTLoRa : public IUART {
 public:
  /**
   * @brief Initializes the UART LoRa communication interface.
   */
  void init();

  /**
   * @brief Sends a string of data over the UART LoRa communication interface.
   *
   * @param data The string of data to be sent.
   * @param len The length of the data to be sent.
   */
  void send(std::string &data, size_t len);
};

#endif
