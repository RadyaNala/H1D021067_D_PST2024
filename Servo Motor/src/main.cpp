#include <Arduino.h>
#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(D4);
  
}

void loop() {
  // myservo.write(90);
  // for(int pos = 0; pos <= 180; pos += 30){
  //   myservo.write(pos);
  //   delay(5);
  // }
  // for(int pos = 180; pos >= 0; pos -= 30){
  //   myservo.write(pos);
  //   delay(5);
  // }

  myservo.write(90);
  myservo.write(180);
  delay(100);
  myservo.write(0);
  delay(100);
}
