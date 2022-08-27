int ledPin = 13;
char buffer[5]; //not expecting more than 5
void setup(){
Serial.begin(9600);
Serial.flush();
pinMode(ledPin, OUTPUT);
}
void loop(){
if (Serial.available() > 0){
delay(100);
int index =0;
int characters = Serial.available();
while (index < characters){
buffer[index++] = Serial.read();
}

Serial.println(buffer);
if (strcmp(buffer, "on")==0){ //comparing strings
Serial.println("ON");
digitalWrite(ledPin, HIGH);
}
else {
digitalWrite(ledPin, LOW);
Serial.println("OFF");
}
Serial.flush();
for (int i =0; i<index; i++){ //emptying the buffer
buffer[i] = '\0';
}
}
}
