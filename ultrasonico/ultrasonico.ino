#define PINO_TRG 7
#define PINO_ECHO 6
int distancia;
int tempo;

void setup() {
  Serial.begin(9600);
  pinMode(PINO_ECHO, INPUT);
  pinMode(PINO_TRG, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(PINO_TRG, LOW);
  delayMicroseconds(2);
  digitalWrite(PINO_TRG, HIGH);
  delayMicroseconds(5);
  digitalWrite(PINO_TRG, LOW);
  tempo = pulseIn(PINO_ECHO, HIGH);
  distancia = tempo/29;
  
  if(distancia < 10) {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }

  if((distancia < 10) && (distancia < 40)) {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }

  if((distancia < 40) && (distancia < 80)) {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }

  if(distancia > 80) {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
  
  delay(1000);
}
