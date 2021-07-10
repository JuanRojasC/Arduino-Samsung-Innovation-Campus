int sensor=8;
int duracion=1000;
const int c=262, d=294, e=330, f=349, g=392, a=440, b=494;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor,OUTPUT);
}

void loop() {
  tone(sensor,e,duracion);
  delay(1000);
  tone(sensor,e,duracion);
  delay(1000);
  tone(sensor,f,duracion);
  delay(
  tone(sensor,g,duracion);
  tone(sensor,g,duracion);
  tone(sensor,f,duracion);
}
