// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  }

// the loop routine runs over and over again forever:
void loop() {
    delay(2000); 
    digitalWrite(6, HIGH);
    delay(10000);
    digitalWrite(6,LOW);
}
