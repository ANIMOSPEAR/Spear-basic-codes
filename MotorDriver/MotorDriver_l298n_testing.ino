//made by Paul Khristian B. Marasigan (2023-2024 Press)

//we define the pins in the motor driver we are using 
int enA = 10;
int in1 = 9;
int in2 = 8;

//we created an idependent variable 
void forward ()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 200);
}

void backward ()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 100);
}

void Stop ()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  

//we set in1 and in2 pins as an output
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//we call the variable forward and backward 
forward();
delay(3000);// means delayed for 3 seconds 
backward();
delay(3000);

}
