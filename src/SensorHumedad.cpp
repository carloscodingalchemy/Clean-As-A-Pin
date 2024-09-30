
#include "SensorHumedad.h"

void SensorHumedad::init() {
    // Inicialización del sensor usando I2C
    std::cout << "Inicializando sensor de humedad...\n";
}

int SensorHumedad::leerHumedad() {
    // Simular lectura de humedad
    std::cout << "Leyendo humedad...\n";
    return 60;  // Retorna un valor simulado de humedad
}