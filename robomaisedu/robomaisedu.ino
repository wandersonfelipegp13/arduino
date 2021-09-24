#include<Servo.h>

Servo ServoDir;
Servo ServoEsq;

void setup() {
  // pinos de infravermelho
  pinMode(7, INPUT); // direita
  pinMode(8, INPUT); // esquerda

  // pinos de infravermelho de baixo do robô
  pinMode(3, INPUT);
  pinMode(4, INPUT);

  // Servos
  ServoDir.attach(5);
  ServoEsq.attach(6);
}

void loop() {
  // Leitura de linha preta abaixo do robô
  if((digitalRead(3) == 1) and (digitalRead(4) == 1)) {
    ServoDir.detach();
    ServoEsq.detach();
  }

  // leitura de obstáculos nas laterais do robô
  if(digitalRead(7) == 1)
    ServoDir.write(140);
  else
    ServoDir.write(10);

  if(digitalRead(8) == 1)
    ServoEsq.write(10);
  else
    ServoEsq.write(140);
    
}
