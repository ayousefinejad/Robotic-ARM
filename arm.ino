
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);

}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    servo1.write(pos);              
    delay(15);             
  }
  for (pos = 110; pos >= 50; pos -= 1) { 
    servo2.write(pos);              
    delay(15);                       
  }
   for (pos = 90; pos <= 180; pos += 1) { 
    servo3.write(pos);              
    delay(15);                       
  }

  for (pos = 90; pos >= 0; pos -= 1) { 
    servo4.write(pos);              
    delay(15);                       
  }

  for (pos = 100; pos >= 30; pos -= 1) { 
    servo5.write(pos);              
    delay(15);                       
  }
  



}
