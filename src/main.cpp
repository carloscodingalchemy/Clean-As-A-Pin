#include <cstdint>
#include <unistd.h>
#include "SensorPresion.h"
#include "SensorTemperatura.h"
#include "SensorHumedad.h"
#include "LoRaWAN.h"

int32_t main() {
    SensorPresion sensorPresion;
    SensorTemperatura sensorTemperatura;
    SensorHumedad sensorHumedad;
    LoRaWAN loraWAN;

    // Inicializar los sensores y LoRaWAN
    sensorPresion.init();
    sensorTemperatura.init();
    sensorHumedad.init();
    loraWAN.init();

    while(true) {
    // Leer los sensores
    int32_t presion = sensorPresion.read();
    int32_t temperatura = sensorTemperatura.read();
    int32_t humedad = sensorHumedad.read();

    // Enviar los datos por LoRaWAN
    loraWAN.enviarDatos(temperatura, presion, humedad);

    sleep(3600); // 1 hora (3600segundos
    }

    return 0;
}
