int piezoPin = 8; 
int ldr = 0; 
int ldrVal = 0; 

void setup() {

}
void loop() {

ldrVal = analogRead(ldr); 
tone(piezoPin,1000); 
delay(25); 
noTone(piezoPin); 
delay(ldrVal); 

}
