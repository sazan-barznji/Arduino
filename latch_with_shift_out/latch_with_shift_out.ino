
int latchPin = 12;
int clockPin = 11;
int dataPin = 13;
  void setup() {
    pinMode(latchPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
  }

  void loop() {
    for (int j = 0; j < 256; j++) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, j);
      digitalWrite(latchPin, HIGH);
      delay(1000);
    } 
  }
