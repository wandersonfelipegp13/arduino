int interval = 200;

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delay(interval);
  digitalWrite(9, LOW);
  delay(25);
}
