// Made By Paul Khristian B. Marasigan (2023-2024 Press)

#include <Servo.h> 
 
Servo myservo;
 
void setup() 
{ 
  myservo.attach(9);
 
} 
 
void loop() {

  myservo.writeMicroseconds(1000);  // set servo to 0 degree
  delay(2000);
   myservo.writeMicroseconds(1500);  // set servo to 90 degree
  delay(2000);
   myservo.writeMicroseconds(2000);  // set servo to 180 degree
  delay(2000);
  myservo.writeMicroseconds(1500);  // set servo to 90 degree
  delay(2000);
  
  } 
