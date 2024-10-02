#ifndef MURATAMODEM_H
#define MURATAMODEM_H

#include "IModem.h"

/**
 * @brief Class representing MurataModem that inherits from IModem interface.
 *
 */
class MurataModem : public IModem {
 public:
  /**
   * @brief Sends a command to the MurataModem.
   *
   * This function is used to send a command to the MurataModem. The command
   * data is provided as a char array along with the length of the data.
   *
   * @param data The command data to be sent.
   * @param len The length of the command data.
   */
  void sendCommand(std::string data, size_t len) override;

  /**
   * @brief Receives a response from the MurataModem.
   *
   * This function is used to receive a response from the MurataModem. The
   * response data is provided as a string parameter.
   *
   * @param data The response data received from the MurataModem.
   */
  void receiveResponse(std::string data) override;
}

#endif  // MURATAMODEM_H
