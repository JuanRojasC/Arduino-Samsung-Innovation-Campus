int pin_enableMotor1=5; //Enable para el motor 1
int pin_control1_Motor1=6; //Pin de control para el motor 1
int pin_control2_Motor1=7; //Pin de control para el motor 
int pin_enableMotor2=8;
int pin_control1_Motor2=9;
int pin_control2_Motor2=10;
int l=LOW, h=HIGH, r;
char dir;


void avanzar(){
  digitalWrite(pin_enableMotor1,h);
  digitalWrite(pin_control1_Motor1, l);
  digitalWrite(pin_control2_Motor1, h);
  digitalWrite(pin_enableMotor2,h);
  digitalWrite(pin_control1_Motor2, h);
  digitalWrite(pin_control2_Motor2, l);
}

void reversa(){
  digitalWrite(pin_enableMotor1,h);
  digitalWrite(pin_control1_Motor1, h);
  digitalWrite(pin_control2_Motor1, l);
  digitalWrite(pin_enableMotor2,h);
  digitalWrite(pin_control1_Motor2, l);
  digitalWrite(pin_control2_Motor2, h);
}

void detener(){
  digitalWrite(pin_enableMotor1,l);
  digitalWrite(pin_enableMotor2,l);
}

void turnr(){
  digitalWrite(pin_enableMotor1,h);
  digitalWrite(pin_control1_Motor1, l);
  digitalWrite(pin_control2_Motor1, h);
  digitalWrite(pin_enableMotor2,h);
  digitalWrite(pin_control1_Motor2, l);
  digitalWrite(pin_control2_Motor2, h);
}

void turnl(){
  digitalWrite(pin_enableMotor1,h);
  digitalWrite(pin_control1_Motor1, h);
  digitalWrite(pin_control2_Motor1, l);
  digitalWrite(pin_enableMotor2,h);
  digitalWrite(pin_control1_Motor2, h);
  digitalWrite(pin_control2_Motor2, l);
}

void setup() {
 Serial.begin(9600);
 pinMode(pin_enableMotor1, OUTPUT);
 pinMode(pin_control1_Motor1, OUTPUT);
 pinMode(pin_control2_Motor1, OUTPUT);
 pinMode(pin_enableMotor2, OUTPUT);
 pinMode(pin_control1_Motor2, OUTPUT);
 pinMode(pin_control2_Motor2, OUTPUT);

}

void loop() {
 /* if(Serial.available()>0){
    dir = Serial.read();
    Serial.println(dir);
    if(dir=='8'){dir='0';avanzar();delay(1000);}
    if(dir=='2'){dir='0';reversa();delay(1000);}
    if(dir=='4'){dir='0';turnr();delay(1000);}
    if(dir=='6'){dir='0';turnl();delay(1000);}
    if(dir=='0'){detener();}}*/
  r=analogRead(A3);
  Serial.println(r);delay(1000);
}
