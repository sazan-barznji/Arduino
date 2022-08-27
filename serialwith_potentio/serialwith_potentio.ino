void setup(){

Serial.begin(9600);
Serial.flush();

}
void loop(){

int val = analogRead(A0);
Serial.println(val * 0.0048);
delay(10);

}
