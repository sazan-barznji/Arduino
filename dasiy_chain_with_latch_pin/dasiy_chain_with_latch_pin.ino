  int latchPin = 12; //Pin 12 of 74HC595 (Latch)
  int clockPin = 11; //Pin 11 of 74HC595 (Clock)
  int dataPin = 13; // Pin 14 of 74HC595 (Data)
  
  int pattern1[] = {0, 255,255, 0, 255, 255, 0, 0, 255, 0,
  0, 255, 0, 0, 255, 255};
  int pattern2[] = {255, 0, 0, 255, 0, 0, 255, 255,0,
  255,255, 0, 255, 255, 0, 0};
  void setup() {
    pinMode(latchPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
  }
  void loop() {
    digitalWrite(latchPin, LOW);
    for (int i = 0; i<16; i++){
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, pattern1[i]);
    digitalWrite(clockPin, HIGH);
  
  }
  
  digitalWrite(latchPin, HIGH);
  delay(1000);
  
    digitalWrite(latchPin, LOW);
    for (int i = 0; i<16; i++){
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, pattern2[i]);
    digitalWrite(clockPin, HIGH);
  }
  digitalWrite(latchPin, HIGH);
  delay(1000);
  }
