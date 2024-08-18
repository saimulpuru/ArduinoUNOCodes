/*
  Buzzer beeping

  Turns a buzzer on for one second, then off for one second, repeatedly.
*/
// the setup function runs once when you press reset or power the board
//Uses Tone and NoTOne functions
void setup() {
  // initialize digital pin 3 as an output.
  pinMode(3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  tone(3, 600) ; // turn the buzzer on at 600Hz frequency
  delay(500);                      // wait for half second
  noTone(3);   // turn the buzzer off 
  delay(500);                      // wait for half second
}
