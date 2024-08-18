//Code to sweep servo from 0 to 90 and back
#include <Servo.h>

const int servoPin1 = 3;  // Servo signal pin connected to Pin 3 on UNO

Servo myServo1;

void setup() {
  myServo1.attach(servoPin1);
  
}

void loop() {
  // Move the servo motor to the starting position
  myServo1.write(0);

  delay(1000);

  // Move the servo motor to a different position
  myServo1.write(180);
  
  delay(1000);

}
