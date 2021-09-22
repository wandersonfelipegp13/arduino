unsigned long duration = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  duration = pulseIn(9, LOW);

  if (duration >= 400) {
    Serial.print("Movimento detectado!");
    Serial.println(duration);
  }

}
