#include "visao.h"
<<<<<<< HEAD
#include <Arduino.h>
=======
#include <arduino.h>
>>>>>>> 919104b548225a2de6e5eb3411a120c42f3607e7

#define LEFT_EDGE_SENSOR  x1 //pinagem
#define RIGHT_EDGE_SENSOR x2 //pinagem
#define REAR_EDGE_SENSOR  x3 //pinagem, substituir x pelo pino

#define EDGE_THRESHOLD 400

static visao esqueda(LEFT_EDGE_SENSOR);
static visao direita(RIGHT_EDGE_SENSOR);
static visao costas(REAR_EDGE_SENSOR);

NaVisao::NaVisao() {
}

void NaVisao::init() {
  esqueda.init();
  direita.init();
  costas.init();

}
// verifica se o inimigo esta na frente
bool NaVisao::nafrente() {
  return nadireita() || naesquerda() || nacosta();
}

// verifica se o inimigo esta na esquerda
bool NaVisao::naesquerda() {
  return esquerda.navisao();
}

// verifica se o inimigo esta direita
bool NaVisao::nadireita() {
  return direita.navisao();
}

// verifica se o inimigo esta atras do robo
bool NaVisao::nacosta() {
  return costas.navisao();
}

visao::visao(int outputPin) {
  pin = outputPin;
}

void visao::init() {
  pinMode(pin, OUTPUT);
}

bool visao::navisao() {
  return analogRead(pin) > EDGE_THRESHOLD;
}