//code made by Paul Khristian B. Marasigan (2023-2024 Press)

// we include servo library  
#include <Servo.h> 

// we set up some position/ degree for servo       
#define UP 180           
#define DOWN 0             

// we set the servo motor name to servomotor
Servo servomotor;

// we define which pin we put the signal of the servo motor 
//(nilagay natin ung pin kung saan naka suksok ung signal ping servo)
int servomotor_pin = 4;

// idk how to explain lmao
// we setup the position in what degree should the servo go
void servo_pos(int pos) {
  servomotor.write(pos);
}

void setup() {
 Serial.begin(9600);  

// we define in which pin the servo is connected
 servomotor.attach(servomotor_pin);
}

void loop() {   
  // now we test the code the servo should move its arm from 180 degree to 0     
  servo_pos(UP);
  delay(1000);
  servo_pos(DOWN);
  delay(1000);
}
