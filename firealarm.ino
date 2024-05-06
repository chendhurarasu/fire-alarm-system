#define  IRIP 5
#define LED 8
bool ir;
void setup() {
  Serial.begin(9600);
  pinMode(BUZZER,OUTPUT);//BUZZER output
  pinMode(IRIP,INPUT);//ir la input
}

void loop() {
  ir=digitalRead(IRIP);
  if(ir==0)
  {
    digitalWrite(BUZZER,HIGH);
    Serial.print(ir);
    Serial.print("\n");
  }
  else
  {
    digitalWrite(BUZZER,LOW);
    Serial.println(ir);
  }
}
