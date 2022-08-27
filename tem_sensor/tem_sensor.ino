int temperaturePin = 0;
void setup() {
Serial.begin(9600); 
}
void loop() 
{
float reading = analogRead(temperaturePin);
float volts = reading * 0.004888;
float milliVolts = volts * 1000; 
float temperature = (milliVolts - 500) / 10; 
Serial.println(temperature); 
delay(1000); 
}
