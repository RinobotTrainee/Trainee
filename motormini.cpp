#include <iostream>
#include "Motor.h"

using namespace std;


Motor_m::Motor_m(uint8_t pinMotorA1, uint8_t pinMotorA2, uint8_t pinMotorB1, uint8_t pinMotorB2)
{
    pinMode(pinMotorA1, OUTPUT);
    pinMode(pinMotorA2, OUTPUT);
    pinMode(pinMotorB1, OUTPUT);
    pinMode(pinMotorB2, OUTPUT);
    m_pinA1 = pinMotorA1; // velocidade
    m_pinA2 = pinMotorA2; // direção
    m_pinB1 = pinMotorB1; // velocidade
    m_pinB2 = pinMotorB2; // direção
}

void Motor_m::frente(uint16_t pwm)
{
    analogWrite(m_pinA1, pwm);
    digitalWrite(m_pinA2, HIGH);
    analogWrite(m_pinB1, pwm);
    digitalWrite(m_pinB2, HIGH); 
}

void Motor_m::atras(uint16_t pwm)
{
    analogWrite(m_pinA1, pwm);
    digitalWrite(m_pinA2, LOW);
    analogWrite(m_pinB1, pwm);
    digitalWrite(m_pinB2, LOW); 
}

void Motor_m::direita(uint16_t pwm)
{
    analogWrite(m_pinA1, pwm);
    digitalWrite(m_pinA2, HIGH);
    analogWrite(m_pinB1, pwm);
    digitalWrite(m_pinB2, LOW); 
}

void Motor_m::esquerda(uint16_t pwm)
{
    analogWrite(m_pinA1, pwm);
    digitalWrite(m_pinA2, LOW);
    analogWrite(m_pinB1, pwm);
    digitalWrite(m_pinB2, HIGH); 
}

void Motor_m::parar()
{
    analogWrite(m_pinA1, 0);
    digitalWrite(m_pinA2, 0);
    analogWrite(m_pinB1, 0);
    digitalWrite(m_pinB2, 0); 
}




