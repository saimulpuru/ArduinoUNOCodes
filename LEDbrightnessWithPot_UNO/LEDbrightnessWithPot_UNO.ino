//Read potentiometer values 
//10k potentiometer connected to A0 on UNO
//Led connected with resistor to Pin 3 on UNO
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600); //begin reading serial port values
}

void loop() {
  // put your main code here, to run repeatedly:
int pot_value = analogRead(A0);
int brighness_led = map(pot_value,0,1023,0,255);//mapping potentiometer values to brighness 0 to 255
analogWrite(3, brighness_led);//using analogWrite function to control brightness of LED
//Serial.println(pot_value);
//Serial.println(brighness_led);
delay(10);
}
