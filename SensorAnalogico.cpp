#include "SensorAnalogico.h"
#include <iostream>
#include <Arduino.h>
#include <math.h>


SensorAnalogico::SensorA(int outputPin) {
  pin = outputPin;
}

int SensorAnalogico::leituraSensorA() { 
  this->leitura = analogRead(this->pin);
  
  if (this->leitura >= 0 && this->leitura <= 4095)
    return (int)((4095.0- (float)this->leitura)*(float)ANALOG_TO_CM); 
  else
    return -1;  
}