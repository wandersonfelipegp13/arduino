int m = 0;
int s = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (s == 60) {
    m++;
    s = 0;
  }

  if (m < 10) {
    Serial.print("0" + (String)m);
  } else {
    Serial.print(m);
  }

  Serial.print(":");

  if (s < 10) {
    Serial.println("0" + (String)s);
  } else {
    Serial.println(s);
  }

  s++;

  delay(1000);

}
