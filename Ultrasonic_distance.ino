int tPin = 7;
int ePin = 8;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  long duration, inches, cm;

  pinMode(tPin, OUTPUT);
  pinMode(ePin, INPUT);
  
  digitalWrite(tPin, LOW);
  delayMicroseconds(2);
  digitalWrite(tPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(tPin, LOW);
  
  duration = pulseIn(ePin, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

//  Serial.print(inches);
//  Serial.print("in, ");
  Serial.println(cm);
  Serial.print("cm");
  delay(100);
}

long microsecondsToInches(long microseconds) {
  // According to Parallax's datasheet for the PING))), there are 73.746
  // microseconds per inch (i.e. sound travels at 1130 feet per second).
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  return microseconds / 29 / 2;
}
