void setup() {
  // Setup a serial connection to the computer
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0);
  Serial.println(val);
}
