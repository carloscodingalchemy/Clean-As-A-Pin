#ifndef LORAWAN_H
#define LORAWAN_H

#include <cstdint>

#include "IModem.h"

/**
 * @file LoRaWAN.h
 * @brief Header file for the LoRaWAN class.
 *
 * This file contains the declaration of the LoRaWAN class, which is responsible
 * for handling LoRaWAN communication.
 */

class LoRaWAN {
 private:
  IModem& modem;

 public:
  /**
   * @brief Initializes the LoRaWAN module.
   *
   * This function is responsible for initializing the LoRaWAN module and
   * preparing it for communication.
   */
  void init();

  /**
   * @brief Sends the specified data over the LoRaWAN network.
   *
   * This function is responsible for transmitting the provided data over the
   * LoRaWAN network with the specified length.
   *
   * @param data The data to be sent over the LoRaWAN network.
   * @param len The length of the data to be sent.
   */
  void enviarDatos(std::string data, size_t len);

  /**
   * @brief Connects to the LoRaWAN network using the specified application EUI
   * and application key.
   *
   * This function is responsible for establishing a connection to the LoRaWAN
   * network using the provided application EUI and application key.
   *
   * @param appEuie The application EUI to be used for connecting to the LoRaWAN
   * network.
   * @param appKey The application key to be used for connecting to the LoRaWAN
   * network.
   */
  void connectToNetwork(std::string appEuie, std::string appKey);
};

#endif
