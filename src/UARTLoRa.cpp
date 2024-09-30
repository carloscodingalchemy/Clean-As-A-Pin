#include "UARTLoRa.h"
#include <iostream>

void UARTLoRa::init() {
    // Inicialización de UART
    std::cout << "Inicializando UART para LoRa...\n";
}

void UARTLoRa::enviarComando(const char* comando) {
    // Simular envío de comando vía UART
    std::cout << "Enviando comando: " << comando << "\n";
}
