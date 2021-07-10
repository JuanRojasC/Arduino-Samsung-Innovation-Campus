int pulsador=7;
int led=13;
int lectura;

void setup() {
  pinMode(pulsador,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 lectura=digitalRead(pulsador);
 if(lectura==HIGH){
  digitalWrite(led,HIGH);
  }
 else{
  digitalWrite(led,LOW);
 }
}
