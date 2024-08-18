//Read potentiometer values 
//10k potentiometer connected to A0 on UNO
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600); //begin reading serial port values
}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(A0);
Serial.println(x);
delay(50);
}
