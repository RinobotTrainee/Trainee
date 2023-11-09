/*Definição das propriedades e métodos;*/

#include <iostream>
#include <math.h>
using namespace std;

int waiting_aP1, waiting_aP2;
bool wiating_dP1;

class strategy{
    private:
    /*definindo os pinos como propriedades
    (estados insternos)*/
        int aP1, aP2;
        bool dP1;
        
    public:
    /*definido construtor padão das propriedades*/
        strategy();
    /*definido as estrategias inciais*/
        int initial_strategy();
    /*definindo método para atualização de estados*/
        void update(int aP1, int aP2, bool dP);
    /*definindo método para tomada de decisão*/
        void makes_decision();
};