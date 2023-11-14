#include <arduino.h>
#ifndef visao
#define visao


class NaVisao {
  public:

    visao();

    void init();
    bool nafrente();
    bool naesquerda();
    bool nadireita();
    bool nacosta();
};

class visao {
  public:

    visao(int pin);

    void init();
    bool navisao();

   private:

    int pin;
};

#endif