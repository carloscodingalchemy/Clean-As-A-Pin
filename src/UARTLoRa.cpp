#include "UARTLoRa.h"
#include <iostream>

void UARTLoRa::init() {
    // Inicialización de UART
    std::cout << "Inicializando UART para LoRa...\n";
}

void UARTLoRa::send(std::string &data, size_t len) {
    // Simular envío de comando vía UART
    std::cout << "Enviando comando: " << data << "\n";
}
