#include "SensorTemperatura.h"
#include <iostream>

void SensorTemperatura::init() {
    // Inicialización del sensor usando I2C
    std::cout << "Inicializando sensor de temperatura...\n";
}

int SensorTemperatura::leerTemperatura() {
    // Simular lectura de temperatura
    std::cout << "Leyendo temperatura...\n";
    return 25;  // Retorna un valor simulado de temperatura
}
