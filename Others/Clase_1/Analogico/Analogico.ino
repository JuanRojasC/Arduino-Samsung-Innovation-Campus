int led=9,sensor=A0,i;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600); 

}

void loop() {
 i=analogRead(sensor);
 Serial.print("Valor sin mapear: ");
 Serial.println(i);
 delay(1000);
 i=map(i,0,1023,0,255);
 Serial.print("Valor mapeado: ");
 Serial.println(i);
 analogWrite(led,255-i);

}
