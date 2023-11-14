class Sensor {
  public:

    Sensor(int pin);

    void init();

    int  distance();

   private:

    int pin;
};

