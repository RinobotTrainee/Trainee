/*Definição das propriedades e métodos;*/

#include <iostream>
//#include <arduino.h>

//incluir o arquivo da visão e motor

class InitialStrategy{ //dipswitch
    public:
        bool finish;
        int pin1, pin2, pin3;

        InitialStrategy();
        //int set_strategy(Motor &m1, Motor &m2);
};

class AutoStrategy{
    public:
        AutoStrategy();
        //void update_motor(Vision &v1, Motor &m1, &m2);
};

//classe list - setar os valores de potencia do motor e tempo de funcionamento 

//dipswitch - equação que trasnforme binario em 1,2 3... n;
//-- atz ´(selecta a) + (int(select b) << 1) + (int (selectc) << 2)

//tempo while para o switch para simular o tempo

//millis (funcao arduino)