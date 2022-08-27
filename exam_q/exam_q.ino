int arr[]= {13,12,11};
float vol= 0; 
float half=1023/2;
void setup() {
  for(int i=0; i<3; i++){
   pinMode(arr[i],OUTPUT); 
  }
 Serial.begin(9600);  
}
void loop() {
  vol= analogRead(A0);
 Serial.println(vol); 
 if (vol<=half){
      for(int i=0; i<3;i++){
       digitalWrite(arr[i],HIGH);
       delay(50);
       digitalWrite(arr[i],LOW);
       delay(50);
      }  
    }else{
       for(int i=0; i<3;i++){
       digitalWrite(arr[i],HIGH);
       delay(50);
       
       }
       for(int i=0; i<3;i++){
       digitalWrite(arr[i],LOW);
       delay(50);
       
       }

      }
    

}
