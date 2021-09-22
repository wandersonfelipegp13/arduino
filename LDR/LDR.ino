int value;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0);
  Serial.println(value);
  delay(500);
}
