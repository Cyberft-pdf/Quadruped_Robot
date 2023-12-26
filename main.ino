#include <Servo.h>

Servo servo1;  // Vytvoření objektu Servo pro první motor
Servo servo2;  // Vytvoření objektu Servo pro druhý motor
Servo servo3;

int nulovaPoziceServa1 = 80;  // Nulová pozice pro první servo
int nulovaPoziceServa2 = 80;  // Nulová pozice pro druhé servo

void setup() {
  servo1.attach(A0);  // Připojení prvního serva k analogovému pinu A0
  servo2.attach(A1);
  servo3.attach(A2);  // Připojení druhého serva k analogovému pinu A1
}

void loop() {
  // Nastavení nulové pozice pro oba serva
  servo1.write(40);
  servo2.write(0);
  servo3.write(0);
  
  // Počkejte 1 sekundu
  delay(1000);
  servo1.write(0);
  servo2.write(40);
  servo3.write(40);
  delay(1000);

}