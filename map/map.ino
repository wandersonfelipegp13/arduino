int value = 0;

void setup() {
    pinMode(A5, INPUT);
    pinMode(6, OUTPUT);
}

void loop() {
    value = analogRead(A5);
    analogWrite(6, map(value, 0, 1023, 0, 255));
}
