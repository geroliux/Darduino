#include "Plaques.h";
#include "startFunc.h";
//funció diana 1 (equip vermell)
int bot1_d1 = 3; //botons
int bot2_d1 = 4;
int bot3_d1 = 5;
int bot4_d1 = 6;
int bot5_d1 = 7;
int bot6_d1 = 8;
int botTorn_d1 = 2;

int ledV1_d1 = 9; //leds vermells
int ledV2_d1 = 10;
int ledV3_d1 = 11;
int ledV4_d1 = 12;
int ledV5_d1 = 13;
int ledV6_d1 = 14;

int ledB1_d1 = 15; //leds blaus
int ledB2_d1 = 16;
int ledB3_d1 = 17;
int ledB4_d1 = 18;
int ledB5_d1 = 19;
int ledB6_d1 = 20;

int ledTorn_d1 = 21; //Led indicador del Torn (Si esta encès és el teu torn)

int contadorP1_1 = 0;
int contadorP2_1 = 0;
int contadorP3_1 = 0;
int contadorP4_1 = 0;
int contadorP5_1 = 0;
int contadorP6_1 = 0;

void setup() {

  for (int pinsLeds_d1 = 9; pinsLeds_d1 < 22; pinsLeds_d1++) {
    pinMode(pinsLeds_d1, OUTPUT);
    digitalWrite(pinsLeds_d1, LOW);
  }

  for (int pinsBots_d1 = 1; pinsBots_d1 < 9; pinsBots_d1++) {
    pinMode(pinsBots_d1, INPUT);
  }

  void start(int ledTorn_d1, int ledTorn_d2);

}

void loop() {


  int estatBotTorn_d1 = digitalRead(botTorn_d1);
  int estatLedTorn_d1 = digitalRead(ledTorn_d1);

  if (estatBotTorn_d1 == HIGH && estatLedTorn_d1 == HIGH) {
    //Passar torn
    digitalWrite(estatLedTorn_d1, LOW);
  }

  int estatBot1_d1 = digitalRead(bot1_d1); //Lectures dels estats de cada placa
  int estatBot2_d1 = digitalRead(bot2_d1);
  int estatBot3_d1 = digitalRead(bot3_d1);
  int estatBot4_d1 = digitalRead(bot4_d1);
  int estatBot5_d1 = digitalRead(bot5_d1);
  int estatBot6_d1 = digitalRead(bot6_d1);

  if (estatLedTorn_d1 == HIGH) {

    bool funcionBot1_d1 (int estatBot1_d1, int ledV1_d1, int ledB1_d1, int contadorP1_1); //Funcions per a cada placa
    bool funcionBot2_d1 (int estatBot2_d1, int ledV2_d1, int ledB2_d1, int contadorP2_1);
    bool funcionBot3_d1 (int estatBot3_d1, int ledV3_d1, int ledB3_d1, int contadorP3_1);
    bool funcionBot4_d1 (int estatBot4_d1, int ledV4_d1, int ledB4_d1, int contadorP4_1);
    bool funcionBot5_d1 (int estatBot5_d1, int ledV5_d1, int ledB5_d1, int contadorP5_1);
    bool funcionBot6_d1 (int estatBot6_d1, int ledV6_d1, int ledB6_d1, int contadorP6_1);

  } else {
    bool contraBot1_d1(int estatBot1_d2, int contadorP1_1);
    bool contraBot2_d1(int estatBot2_d2, int contadorP2_1);
    bool contraBot3_d1(int estatBot3_d2, int contadorP3_1);
    bool contraBot4_d1(int estatBot4_d2, int contadorP4_1);
    bool contraBot5_d1(int estatBot5_d2, int contadorP5_1);
    bool contraBot6_d1(int estatBot6_d2, int contadorP6_1);
  }
}
