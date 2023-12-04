int sensorpin=A0;
int led=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorpin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensordata=analogRead(sensorpin);
  Serial.println(sensordata);
  if(sensordata>90)
  {
    digitalWrite(led,HIGH);   
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
