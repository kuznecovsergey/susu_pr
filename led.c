// Светодиод !!!
void setup() {
  pinMode(13, OUTPUT);
}

// Основной цикл
void loop() {
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(2000);
}
