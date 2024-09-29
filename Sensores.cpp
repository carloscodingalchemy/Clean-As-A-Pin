#include "Sensores.h"
#include <iostream>

void SensorHumedad::init() {
    // Inicialización del sensor usando I2C
    std::cout << "Inicializando sensor de humedad...\n";
}

int SensorHumedad::leerHumedad() {
    // Simular lectura de humedad
    std::cout << "Leyendo humedad...\n";
    return 60;  // Retorna un valor simulado de humedad
}


void SensorPresion::init() {
    // Inicialización del sensor usando SPI (no especifico, para simplificar)
    std::cout << "Inicializando sensor de presión...\n";
}

int SensorPresion::leerPresion() {
    // Simular lectura de presión
    std::cout << "Leyendo presión...\n";
    return 1013;  // Retorna un valor simulado de presión
}

void SensorTemperatura::init() {
    // Inicialización del sensor usando I2C
    std::cout << "Inicializando sensor de temperatura...\n";
}

int SensorTemperatura::leerTemperatura() {
    // Simular lectura de temperatura
    std::cout << "Leyendo temperatura...\n";
    return 25;  // Retorna un valor simulado de temperatura
}