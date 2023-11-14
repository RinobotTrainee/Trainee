#include "arduino.h"
#include "SensorDigital.h"
#include <Arduino.h>



SensorDigital::Sensor(int outputPin) {
  pin = outputPin;
}


int SensorDigital::leituraSensor() {
  this ->leitura = digitalRead(this->pin)

  if (this->leitura == true)
    this->enemy == true;
  else
    this->enemy == false;
    
  return this->enemy;

  return value;
}