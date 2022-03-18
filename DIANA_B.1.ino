int ledV1 = 9; //leds vermells
int ledV2 = 10;
int ledV3 = 11;
int ledV4 = 12;
int ledV5 = 13;
int ledV6 = 14;

int ledTorn = 21; //Led indicador del Torn (Si esta encès és el teu torn)

int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;
int state5 = 0;
int state6 = 0;
int stateTorn = 0;

int bot1 = 3; //botons
int bot2 = 4;
int bot3 = 5;
int bot4 = 6;
int bot5 = 7;
int bot6 = 8;
int botTorn = 2;

int actual1 = 1;
int actual2 = 1;
int actual3 = 1;
int actual4 = 1;
int actual5 = 1;
int actual6 = 1;
int actualTorn = 1;

void setup() {
Serial.begin(9600);
pinMode(ledV1,OUTPUT);
pinMode(ledV2,OUTPUT);
pinMode(ledV3,OUTPUT);
pinMode(ledV4,OUTPUT);
pinMode(ledV5,OUTPUT);
pinMode(ledV6,OUTPUT);
pinMode(ledTorn,OUTPUT);

pinMode(bot1, INPUT_PULLUP);
pinMode(bot2, INPUT_PULLUP);
pinMode(bot3, INPUT_PULLUP);
pinMode(bot4, INPUT_PULLUP);
pinMode(bot5, INPUT_PULLUP);
pinMode(bot6, INPUT_PULLUP);
pinMode(botTorn, INPUT_PULLUP);

digitalWrite (ledTorn, HIGH);
}



void loop() {
actual1 = digitalRead(bot1);
actual2 = digitalRead(bot2);
actual3 = digitalRead(bot3);
actual4 = digitalRead(bot4);
actual5 = digitalRead(bot5);
actual6 = digitalRead(bot6);
actualTorn = digitalRead(botTorn);

//Serial.println(actual1);
Serial.println(state1);
if(actual1!=1){
state1 = selectState(state1,9);
}
if(actual2!=1){
state2 = selectState(state2,10);
}
if(actual3!=1){
state3 = selectState(state3,11);
}
if(actual4!=1){
state4 = selectState(state4,12);
}
if(actual5!=1){
state5 = selectState(state5,13);
}
if(actual6!=1){
state6 = selectState(state6,14);
}
if(actualTorn!=1){
stateTorn = selectState(stateTorn,21);
}
}

//
int selectState(int state, int ledNumber){
if(state==0){
state = stateON(state , ledNumber);
return state;
}
else if(state == 1){
state = stateOFF(state, ledNumber);
return state;
}
else{
//do nothing
}
}

int stateON(int state, int ledNumber){
digitalWrite(ledNumber,HIGH);
state = 1;
return state;
}

int stateOFF(int state, int ledNumber){
digitalWrite(ledNumber,LOW);
state = 0;
return state;
}
