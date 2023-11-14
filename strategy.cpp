// #include <iostream>
// #include "strategy.h"
// #include "Motor.h"
// #include "visao.h"
// #include <Arduino.h>

// pinMode(pin1 , INPUT);
// pinMode(pin2 , INPUT);
// pinMode(pin3 , INPUT);

// InitialStrategy::InitialStrategy(){
//     this->finish = false;
//     this->pin1 = pin1;
//     this->pin2 = pin2;
//     this->pin3 = pin3;
// };

// int set_strategy(){
//     bool set_pin1 = digitalRead(pin1);
//     bool set_pin2 = digitalRead(pin2);
//     bool set_pin3 = digitalRead(pin3);
//     int escolha = int(set_pin1) + (int(set_pin2) << 1) + (int(set_pin3) << 2);

//     switch(escolha){
//         case 0: // peso >
//             for(int i = 0; i < 2; ++i){
//             Motor_m::frente(250);
//         }
//         break;
//         case 1: // peso <
//             Motor_m::atras(20);
//             for(int i = 0; i < 2; ++i){
//             Motor_m::frente(100);
//         }
//         break;
//         case 2: // + rapido
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::frente(50);
//             }
//             Motor_m::esquerda(25);
//             Motor_m::direita(75);
//         break;
//         case 3: // + devagar
//             for(int i = 0; i < 5; ++i){
//                 Motor_m::frente(250);
//             }
//         break;
//         case 4: // + direita
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::frente(100);            
//             }
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::esquerda(100);            
//             }
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::direita(100);            
//             }
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::frente(100);            
//             }
//         break;
//         case 5: // + esquerda
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::frente(100);            
//             }
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::direita(100);            
//             }
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::esquerda(100);            
//             }
//             for(int i = 0; i < 2; ++i){
//                 Motor_m::frente(100);            
//             }
//         break;
//         case 6: // + longe
//             for(int i = 0; i < 7; ++i){
//                 Motor_m::frente(125);
//             }
//         break;
//         case 7: // + perto
//             for(int i = 0; i < 3){
//                 Motor_m::frente(250);
//             }
//         break;
//         case 8: // algo deu errado
//             Serial.printl("Algo deu errado...");
//         break;
//     }

//     this->finish = int(true);

// }

// AutoStrategy::AutoStrategy(){};

// void update_motor(){
//     if(NaVisao::nafrente()){
//         for(int i = 0; i < 2; ++i){
//             Motor_m::frente(100)
//         }
//         return;
//     }
//     else if(NaVisao::nadireita()){
//         for(int i = 0; i < 2; ++i){
//             Motor_m::esquerda(100);
//         }
//         return;
//     }
//     else if(NaVisao::naesquerda()){
//         for(int i = 0; i < 2; ++i){
//             Motor_m::direita(100);
//         }
//         return;
//     }
//     else if(NaVisao::nacosta()){
//         Motor_m::parar();
//         Motor_m::direita(230);
//         Motor_m::parar();
//         Motor_m::frente(200);
//         return;
//     }
//     return;
// }

