/*
  Buzzer frequency mapping to potentiometer knob

  Turns a buzzer on for one second, then off for one second, repeatedly.
*/
// the setup function runs once when you press reset or power the board
//Uses Tone and NoTOne functions
void setup() {
  // initialize digital pin 3 as an output.
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);// potentiometer connected to A0
}

// the loop function runs over and over again forever
void loop() {
  int pot_val = analogRead(A0);
  int freq = map(pot_val,0,1023,0,1023);
  tone(3, freq) ; // turn the buzzer on at 600Hz frequency
  delay(5);                      // wait for half second
 
 
}
