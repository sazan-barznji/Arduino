int ledPin = 9; 
int piezoPin = A0; 
int threshold = 70; 
int sensorValue = 0; 
float ledValue = 0; 

void setup() {

  pinMode(ledPin, OUTPUT);
}
void loop() {

  sensorValue = analogRead(piezoPin); 
  if (sensorValue >= threshold) { 
  
  ledValue = 255;
  
  }
  analogWrite(ledPin, int(ledValue) ); // Write brightness value to LED
  ledValue = ledValue - 0.05; // turnoff the LED slowly
  if (ledValue <= 0) {
  
  ledValue = 0; } 

}
