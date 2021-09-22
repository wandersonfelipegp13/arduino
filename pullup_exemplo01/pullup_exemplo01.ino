void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delay(750);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(750);
  digitalWrite(10, LOW);

  digitalWrite(11, HIGH);
  delay(750);
  digitalWrite(11, LOW);

  digitalWrite(12, HIGH);
  delay(750);
  digitalWrite(12, LOW);

  if (digitalRead(7) == LOW) {
    digitalWrite(8, HIGH);
    delay(750);
    digitalWrite(8, LOW);
  }
}
