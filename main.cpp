#include "SensorPresion.h"
#include "SensorTemperatura.h"
#include "SensorHumedad.h"
#include "LoRaWAN.h"

int main() {
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
    int presion = sensorPresion.leerPresion();
    int temperatura = sensorTemperatura.leerTemperatura();
    int humedad = sensorHumedad.leerHumedad();

    // Enviar los datos por LoRaWAN
    loraWAN.enviarDatos(temperatura, presion, humedad);

    usleep(36000000); // 1 hora (36000000 microsegundos
    }

    return 0;
}
