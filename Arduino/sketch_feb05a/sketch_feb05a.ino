// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);
  pinMode(8, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A2);
  // print out the value you read:
  //Serial.println(sensorValue);
  if (sensorValue < 100)
  {
    digitalWrite(8, HIGH);
    //delay(1000);
  }
  else
  {
    digitalWrite(8, LOW);   
    //delay(1000);
  }
}
