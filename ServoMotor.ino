#include <Servo.h> 
  
int servoPin = 3; 
int val;

Servo S1; 
void setup() { 
  
   Serial.begin(9600);
   S1.attach(servoPin); 
}
void loop()
{ 
  while(Serial.available()==0)
  {
  }
  val=Serial.parseInt();
  while(val>180)
  {
    val=val-180;
  }
  Serial.println(val);
  S1.write(val);
  delay(10);
}


 
  
 
  