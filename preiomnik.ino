#include <SoftwareSerial.h>
String a,a1;
boolean b=0;
void setup() {
Serial.begin(9600);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}
void loop() {
while(Serial.available()) {
  a=Serial.readString();
  if(a!=" "){
    a1=a;
  }
  Serial.println(a1);
  if(a1=="w"){
    digitalWrite(4,1);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,0);
  }
  if(a1=="s"){
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,0);
    digitalWrite(7,1);
  }
  if(a1=="d"){
    digitalWrite(4,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,0);
  }
  if(a1=="a"){
    digitalWrite(4,1);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,1);
  }
  if (a1=="f"){
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
  }
    if (a1=="p"){
    digitalWrite(8,1);
  }
    if (a1=="o"){
    digitalWrite(8,0);
  }
}}
  
