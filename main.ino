#include <Servo.h>

Servo servo1; 
Servo servo2;  
Servo servo3;

int nulovaPoziceServa1 = 80;  
int nulovaPoziceServa2 = 80;  

void setup() {
  servo1.attach(A0);  
  servo2.attach(A1);
  servo3.attach(A2);  
}

void loop() {
  servo1.write(40);
  servo2.write(0);
  servo3.write(0);
  
  delay(1000);
  servo1.write(0);
  servo2.write(40);
  servo3.write(40);
  delay(1000);

}
