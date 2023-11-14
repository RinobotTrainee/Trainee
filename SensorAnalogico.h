#ifndef SensorAnalogico
#define SensorAnalogico
#include <Arduino.h>


#define ANALOG_TO_CM ((float)(20.0 / 2000.0))

class SensorAnalogico
{
public:
    int leitura;
    int distanciaCM;
   
    int leituraSensorA();
    SensorA(int pin);

private:
    int pin;
 };


#endif