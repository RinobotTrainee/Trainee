#include <arduino.h>
#ifndef Motor
#define Motor

#include <inttypes.h>



class Motor_m{

    public:

    Motor_m(uint8_t pinMotorA1, uint8_t pinMotorA2, uint8_t pinMotorB1, uint8_t pinMotorB2);
    void frente(uint16_t pwm);
    void atras(uint16_t pwm);
    void esquerda(uint16_t pwm);
    void direita(uint16_t pwm);
    void parar(uint16_t pwm);

    private:

    uint8_t m_pinA1;
    uint8_t m_pinA2;
    uint8_t m_pinB1;
    uint8_t m_pinB2;
};

#endif