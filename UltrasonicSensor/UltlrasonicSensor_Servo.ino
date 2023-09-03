//modified by Paul Khristian B. Marasigan

#include <Servo.h> 
const int trigPin = 9;
const int echoPin = 10;

// defines variables
Servo myservo;
long duration;
int distance;


void setup() {
  myservo.attach(7);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor

if(distance >= 10){
  myservo.writeMicroseconds(1000); 
}

else {
  myservo.writeMicroseconds(2000); 
}
  
  Serial.print("Distance: ");
  Serial.println(distance);
}
