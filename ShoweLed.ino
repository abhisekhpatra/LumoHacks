int button = 1;
int led1 = 13;
int led2 = 2;
void setup() {
 pinMode (button, INPUT);
 pinMode (led1, OUTPUT);
 pinMode(led2,OUTPUT);
}

void loop() {
  
  bool value = digitalRead(button);
  
  if(value==HIGH){
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
     
  }
  if(value==LOW){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  
  
  }
 

}
