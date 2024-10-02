#include "LoRaWAN.h"

#include <iostream>

#include "IModem.h"

void LoRaWAN::init() {
  // Inicialización de LoRaWAN
  std::cout << "Inicializando protocolo LoRaWAN...\n";
}

void LoRaWAN::enviarDatos(std::string data, size_t len) {
  std::cout << "Enviando datos a través de LoRaWAN...\n";
  modem.sendCommand(data, len);
}

void LoRaWAN::connectToNetwork(std::string appEuie, std::string appKey) {
  std::cout << "Conectando a la red...\n";
}