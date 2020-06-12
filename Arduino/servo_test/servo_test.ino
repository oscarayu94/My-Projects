int servopin1 = 4;
//int servopin2 = 5;
int pulse = 2000;

void setup() {
  pinMode(servopin1, OUTPUT);
  //pinMode(servopin2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(servopin1, HIGH);
  //digitalWrite(servopin2, HIGH);
  delayMicroseconds(pulse);
  digitalWrite(servopin1, LOW);
  //digitalWrite(servopin2, LOW);
  delay (20);
}
