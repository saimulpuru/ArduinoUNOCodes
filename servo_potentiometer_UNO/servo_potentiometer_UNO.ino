//Code to sweep servo from 0 to 90 and back
#include <Servo.h>

const int servoPin1 = 3;  // Servo signal pin connected to Pin 3 on UNO

Servo myServo1;

void setup() {
  myServo1.attach(servoPin1);
  pinMode(A0, INPUT);// potentiometer connected to A0
}

void loop() {
  // Move the servo motor to the starting position
  int pot_val = analogRead(A0);
  int angle = map(pot_val,0,1023,0,180);
  myServo1.write(angle);// move servo along with the potentiometer knob
  delay(10);
}
