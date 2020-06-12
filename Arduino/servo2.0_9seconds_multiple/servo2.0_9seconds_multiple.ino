#include <Servo.h>
Servo servoMotor1;
Servo servoMotor2;

void setup() {
  Serial.begin(9600);
  servoMotor1.attach(9);
  servoMotor2.attach(10);
  servoMotor1.write(0);
  servoMotor2.write(0);
  for (int i = 0; i <= 90; i++)
  {
    // Desplazamos al ángulo correspondiente
  servoMotor1.write(i);
  servoMotor2.write(i);
    // Hacemos una pausa de 25ms
  delay(100);
  }

  // Para el sentido negativo
  for (int i = 89; i > 0; i--)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor1.write(i);
    servoMotor2.write(i);
    // Hacemos una pausa de 25ms
    delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
