#include "LoRaWAN.h"
#include "UARTLoRa.h"
#include <iostream>

void LoRaWAN::init() {
    // Inicialización de LoRaWAN
    std::cout << "Inicializando protocolo LoRaWAN...\n";
}

void LoRaWAN::enviarDatos(int32_t temperatura, int32_t presion, int32_t humedad) {
    // Simular envío de datos a través de LoRaWAN
    UARTLoRa uart;
    uart.init();
    
    std::cout << "Enviando datos a través de LoRaWAN...\n";
    std::string comando = "T:" + std::to_string(temperatura) + " P:" + std::to_string(presion) + " H:" + std::to_string(humedad);
    uart.send(comando, comando.size());
}
