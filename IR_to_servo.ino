#include <Servo.h>

Servo myservo;

int pos = 0;    // servo position
int sensor=8;   // connect IR sensor on pin 8
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(sensor,INPUT);
}

void loop() {
  s=digitalRead(sensor);
  if(s==HIGH){
  for (pos = 0; pos <= 120; pos += 1) { // goes from 0 degrees to 120 degrees with 20ms delay
    myservo.write(pos);
    delay(15);
  }
  }
  //******************************OPPOSITE CONDITION*************************************
  /*else if(s==LOW){
  for (pos = 120; pos >= 0; pos -= 1) { // goes from 0 degrees to 120 degrees with 20ms delay
    myservo.write(pos);
    delay(15);
  }
  }*/
}
