void setup() {
  // Setup a serial connection to the computer
  Serial.begin(9600);
}

void loop() {
  // get a value
  float value = analogRead(A0);
  //print the value
  Serial.println(value);
}
