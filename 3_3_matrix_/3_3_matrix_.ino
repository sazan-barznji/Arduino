  int cols[] = {5,6,7};
  int rows[] = {2,3,4};
  int val = A0;
  int pat1[3][3] = {
  {0,0,0},
  {1,1,1},
  {0,0,0}};
  int pat2[3][3] = {
  {1,0,0},
  {0,1,0},
  {0,0,1}};
  int pat3[3][3] = {
  {0,1,0},
  {0,1,0},
  {0,1,0}};
  int pat4[3][3] = {
  {0,0,1},
  {0,1,0},
  {1,0,0}}; 
  void setup() {
    for (int i=0; i<3; i++) {
    pinMode(rows[i], OUTPUT);
    pinMode(cols[i], OUTPUT);
    pinMode(A0, INPUT);
    }
  }
  void loop() {
    pattern(pat1);
    pattern(pat2);
    pattern(pat3);
    pattern(pat4);
  }
  void turnAllOff() {
    for (int i=0; i<3;i++) {
      digitalWrite(rows[i],LOW);
    }
  }
  void pattern(int x[3][3]){
    for (int row=0; row<3; row++) {
      turnAllOff();
      // set rows to high
      digitalWrite(rows[row],HIGH);
    // go through columns
    for (int col=0; col<3; col++) {
    // check if on
    if (x[row][col]==1) {
    digitalWrite(cols[col],LOW);
    } else {
    digitalWrite(cols[col],HIGH);
    }
    }
      delay(analogRead(val));
    }
    }
