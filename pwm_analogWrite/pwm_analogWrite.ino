// 0 to 255
int potency = 50;

void setup() {
  pinMode(6, OUTPUT);
}

void loop() {
  analogWrite(6, potency);
}
