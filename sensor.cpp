#include "Arduino.h"
#include "sensor.h"



Sensor::Sensor(int outputPin) {
  pin = outputPin;
}

void Sensor::init() {
  pinMode(pin, OUTPUT);
}

int Sensor::distance() {
  int value = analogRead(pin);

  return value;
}