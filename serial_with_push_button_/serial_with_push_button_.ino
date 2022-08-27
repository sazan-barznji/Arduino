void setup(){
  Serial.begin(9600);
  Serial.flush();
  pinMode(11, INPUT); 
}

void loop(){
  int pushbtn = digitalRead(11);
  Serial.println(pushbtn);
  delay(10); 
}
