int led=6,sensor=A0,i,h,t;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600); 

}

void loop() {
 i=analogRead(sensor);
 Serial.println(i);
 if(i<500){digitalWrite(led,HIGH);}
 else{digitalWrite(led,LOW);}
 delay(250);
}
