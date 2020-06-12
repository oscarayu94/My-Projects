#include "SD.h" //SD library
#define SD_ChipSelectPin 10//Select the SS pin for the SD module
#include "SPI.h"
#include "TMRpcm.h" //The library to play the audio files

TMRpcm Memoria; //Here you put the name you want

void setup(){
  Serial.begin(9600); //Initialize serial com
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  if (!SD.begin(SD_ChipSelectPin)) { //If the SS pin is in a LOW state it will send a Fail message Serial.println("SD fail");
    Serial.println("SD fail");
    return;
  }
  Memoria.speakerPin = 9; //The pin where you will put the speaker, usually the 9
}

void loop(){

  Memoria.setVolume(5); //You can set the volume here up to 7
  Memoria.quality(1); //only accepts 1 or 0, 1 is for better quality
  Memoria.play("intro.wav"); //Here you place the name of your audio
  delay(17000);
  digitalWrite(2,HIGH);
  delay(6000);
  digitalWrite(3,HIGH);
  delay(8000);
  digitalWrite(4,HIGH);
  delay(8000); //This delay should be at least of the same lenght of your audio,
  //This library can play the music while the arduino is in other task so you can play it background
  //or wait for the audio to finish
}

// the loop routine runs over and over again forever:
//void loop() {
    //delay(2000); 
    //digitalWrite(10, HIGH);
    //delay(2000);
//    digitalWrite(10,LOW);
//}
