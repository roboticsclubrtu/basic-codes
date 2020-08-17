int sensor=5;   // connect IR sensor on pin 8
int buzz=6;
void setup() {
  pinMode(sensor,INPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
int s=digitalRead(sensor);                                          
  if(s==HIGH){
  digitalWrite(buzz,HIGH);
  }
  else{
    digitalWrite(buzz,LOW);
  }
  //******************************OPPOSITE CONDITION*************************************
  /*else if(s==LOW){
  for (pos = 120; pos >= 0; pos -= 1) { // goes from 0 degrees to 120 degrees with 20ms delay
    myservo.write(pos);
    delay(15);
  }
  }*/
}
