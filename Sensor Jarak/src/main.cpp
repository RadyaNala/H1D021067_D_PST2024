#include <Arduino.h>

// put function declarations here:
int trigPin = D2;
int echoPin = D0;
int led = D6;
long duration; 
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = 0.034 * duration / 2;
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.print(" cm ");
  if(distance <= 10){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  delay(1000);

}
