#include <Arduino.h>
// put function declarations here:
void setup() {
  // put your setup code here, to run once:
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(14, OUTPUT);
  //pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(26, HIGH);
  delay(1000);
  digitalWrite(26, LOW);

  digitalWrite(27, HIGH);
  delay(1000);
  digitalWrite(27, LOW);

  digitalWrite(25, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(32, LOW);
  delay(1000);
}