/*Implementação dos métodos*/

#include "strategy.h"

/*inicializando construtor padrão com estado nulo*/
strategy::strategy(){
    aP1 = 0;
    aP2 = 0;
    dP1 = false;
}

int initial_startegy(){
        switch(switchOperator){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default: ;
    }
}

void update(int aP1, int aP2, bool dP1){
    aP1 = waiting_aP1;
    aP2 = waiting_aP2;
    dP1 = wiating_dP1;
}

void make_decision(){
    // if(){

    // }else if(){

    // }
}
