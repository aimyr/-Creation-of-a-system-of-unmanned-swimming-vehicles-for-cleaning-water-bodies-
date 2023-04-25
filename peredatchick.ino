#include <SoftwareSerial.h>
SoftwareSerial loraSerial(2, 3); // TX, RX контакты для подключения модуля lora e32
void setup() {
  Serial.begin(9600);
  loraSerial.begin(9600);}
void loop() {
  // put your main code here, to run repeatedly:

a=analogRead(A0);
b=analogRead(A1);
if((b>600)&&(a>600)){
loraSerial.write("1");}
if((b<200)&&(a<200)){
loraSerial.write("2");}
if((a>600)&&(b<200)){
loraSerial.write("3");}
if((a<200)&&(b>600)){
loraSerial.write("4");}
}
