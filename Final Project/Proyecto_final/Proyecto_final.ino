int pin_enableMotor1=5; //Enable para el motor 1
int pin_control1_Motor1=6; //Pin de control para el motor 1
int pin_control2_Motor1=7; //Pin de control para el motor 
int pin_enableMotor2=8;
int pin_control1_Motor2=9;
int pin_control2_Motor2=10;
int l=LOW, h=HIGH, r, s, i;
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
 for(i=0,s=0;i<10;i++){r=analogRead(A2);s=s+r;}
 s=s/10;
 Serial.println(s);

}

void loop() {
 r=analogRead(A2);
 if(Serial.available()>0&&r+10>s){
    dir = Serial.read();
    if(dir=='8'){dir='0';avanzar();delay(1000);}
    if(dir=='2'){dir='0';reversa();delay(1000);}
    if(dir=='4'){dir='0';turnr();delay(1000);}
    if(dir=='6'){dir='0';turnl();delay(1000);}
    if(dir=='0'){detener();}}
 if(r+10<s){Serial.available(Serial.read=0);}
 else{detener();}
  
}
