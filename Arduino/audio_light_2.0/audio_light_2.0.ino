#include "SD.h"
#define SD_ChipSelectPin 10
#include "SPI.h"
#include "TMRpcm.h"

TMRpcm Cancion;

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  if (!SD.begin(SD_ChipSelectPin))
  {
    Serial.println("SD fail");
    return;
  }
  Cancion.speakerPin = 9;
}

int get_trigger()
{
  delay (10000);
  int sensorValue = analogRead(A2);
  //Serial.println(sensorValue);
  return sensorValue;
}

void loop()
{
  Cancion.setVolume(5);
  Cancion.quality(1);
  Cancion.play("intro.wav");
  delay(25000);
  digitalWrite(2,HIGH);
  delay(6500);
  digitalWrite(3,HIGH);
  delay(8200);
  digitalWrite(4,HIGH);
  delay(8000);
  int sensorValue = analogRead(A2);
  Serial.println(sensorValue);
  if(sensorValue > 1100)
  {
    Cancion.play("bad.wav");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }
  else if(sensorValue < 1100)
  {
    Cancion.play("good.wav");
  }
}

void bad_ending()
{
  Cancion.setVolume(1);
  Cancion.quality(1);
  Cancion.play("bad.wav");
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}

void good_ending()
{
  Cancion.setVolume(1);
  Cancion.quality(1);
  Cancion.play("good.wav");
}
