#include <Servo.h>
Servo servoMotor;

void setup() {
  Serial.begin(9600);
  servoMotor.attach(9);
  servoMotor.write(0);
  for (int i = 0; i <= 90; i++)
  {
    // Desplazamos al ángulo correspondiente
  servoMotor.write(i);
    // Hacemos una pausa de 25ms
  delay(100);
  }

  // Para el sentido negativo
  for (int i = 89; i > 0; i--)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor.write(i);
    // Hacemos una pausa de 25ms
    delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
