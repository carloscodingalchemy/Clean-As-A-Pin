#ifndef IMODEM_H
#define IMODEM_H

#include <cstdint>
#include <string>

/**
 * @brief Interface class for a modem.
 */
class IModem {
 public:
  /**
   * @brief Virtual function to send a command to the modem.
   *
   * This pure virtual function must be implemented by derived classes to send a
   * command with the given data and length to the modem.
   *
   * @param data The command data to send to the modem.
   * @param len The length of the data to send.
   */
  virtual void sendCommand(std::string data, size_t len) = 0;

  /**
   * @brief Virtual function to receive a response from the modem.
   *
   * This pure virtual function must be implemented by derived classes to
   * receive a response with the given data from the modem.
   *
   * @param data The response data received from the modem.
   */
  virtual void receiveResponse(std::string data) = 0;
}

#endif  // IMODEM_H