#include "LoRaWAN.h"
#include "UARTLoRa.h"
#include <iostream>

void LoRaWAN::init() {
    // Inicialización de LoRaWAN
    std::cout << "Inicializando protocolo LoRaWAN...\n";
}

void LoRaWAN::enviarDatos(int temperatura, int presion, int humedad) {
    // Simular envío de datos a través de LoRaWAN
    UARTLoRa uart;
    uart.init();
    
    std::cout << "Enviando datos a través de LoRaWAN...\n";
    char comando[100];
    snprintf(comando, 100, "T:%d P:%d H:%d", temperatura, presion, humedad);
    uart.enviarComando(comando);
}
