int button=2;
int melody=13;
int buttonstate=0;

void setup() {
  pinMode(melody,OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  buttonstate=digitalRead(button);

  if(buttonstate==HIGH){
    digitalWrite(melody,HIGH);
    delay(30000);
  }
  else{digitalWrite(melody,LOW);}
}
