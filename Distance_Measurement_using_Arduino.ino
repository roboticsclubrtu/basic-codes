const int trigPin = 3;
const int echoPin = 2;
long duration;
int Cm;
void setup() {  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  Cm = duration * 0.0340 / 2;
  Serial.println(Cm);
  Serial.print("cm");
  delay(1000);
}
