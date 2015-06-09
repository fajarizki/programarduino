/*
  tugas KT, flip-flop program of arduino 
 author : jarki 
  */
 
int atsu =8, bajing=9, curut=10;


void setup() {                
  // inisial fungsi pin sebagai output
  pinMode(atsu,OUTPUT);
  pinMode(bajing,OUTPUT);
  pinMode(curut,OUTPUT);  

}

// loop, berfungsi agar program berjalan terus(perulangan)
void loop() {
  digitalWrite(atsu, HIGH);   
  digitalWrite(bajing,LOW);  
  digitalWrite(curut, LOW);
  delay(1000);             
  
  digitalWrite(atsu, LOW);   
  digitalWrite(bajing,HIGH);  
  digitalWrite(curut, LOW);
  delay(1000);             
  
  digitalWrite(atsu, LOW);   
  digitalWrite(bajing,LOW);  
  digitalWrite(curut, HIGH);
  delay(1000);             
  
}
