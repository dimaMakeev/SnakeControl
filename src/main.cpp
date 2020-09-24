#include <Arduino.h>
int Xpin=A0;
int Ypin=A1;
int Spin=2; 
int Xval;
int Yval;
int Sval;



void setup() {

Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
pinMode(Spin, INPUT);
digitalWrite(Spin, HIGH);

}

void loop() {
  Xval = analogRead(Xpin);
  Yval = analogRead(Ypin);
  Sval = analogRead(Spin);
  delay(200);
if (Xval > 610)
Serial.println("-1,0");
if (Xval < 450)
Serial.println("1,0");
if (Yval > 610)
Serial.println("0,1");
if (Yval < 450)
Serial.println("0,-1");

/*
Serial.print("X Value = ");
Serial.print(Xval);
Serial.print(" Y Value = ");
Serial.print(Yval);
Serial.print(" Switch Value = ");
Serial.println(Sval);*/
}