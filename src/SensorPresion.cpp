#include "SensorPresion.h"

void SensorPresion::init() {
    // Inicialización del sensor usando SPI (no especifico, para simplificar)
    std::cout << "Inicializando sensor de presión...\n";
}

int SensorPresion::leerPresion() {
    // Simular lectura de presión
    std::cout << "Leyendo presión...\n";
    return 1013;  // Retorna un valor simulado de presión
}