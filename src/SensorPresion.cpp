#include "SensorPresion.h"
#include <iostream>

void SensorPresion::init() {
  // Inicialización del sensor usando SPI (no especifico, para simplificar)
  std::cout << "Inicializando sensor de presión...\n";
}

int32_t SensorPresion::read() {
  // Simular lectura de presión
  std::cout << "Leyendo presión...\n";
  return 1013;  // Retorna un valor simulado de presión
}