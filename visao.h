#include <iostream>
#include <math.h>
using namespace std;

//int waiting_vP1, waiting_vP2;
//bool waiting_eP1;
//bool efP1, etP2, edP3, eeP4;

class visao{
    private:
    //definindo os pinos como propriedades
    
        int vfP1, vtP2, vdP3, veP4; //visao da frente, tras, direita, esquerda
        bool efP1, etP2, edP3, eeP4; // verifica se ha um inimigo na frente, tras, direita, esquerda
        
    public:
    //definindo a visao incial
        int initial_vision();
    //definindo atualização de estado da visao
        void update(int vfP1, int vtP2, int vdP3, int veP4, bool eP1);
};