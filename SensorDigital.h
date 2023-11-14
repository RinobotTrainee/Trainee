#include <arduino.h>
#ifndef SensorDigital
#define SensorDigital

class SensorDigital {
  public:

    Sensor(int pin);

    bool leitura;
    bool enemy;

    int  leituraSensor();

   private:

    int pin;
};

#endif
