int i;

void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {

  i = 9;

  while (i <= 12) {
    digitalWrite(i, HIGH);
    delay(150);
    digitalWrite(i, LOW);
    i++;
  }

  while (i >= 9) {
    digitalWrite(i, HIGH);
    delay(150);
    digitalWrite(i, LOW);
    i--;
  }

}
