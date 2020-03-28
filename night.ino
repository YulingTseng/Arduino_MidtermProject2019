byte pinCds=A0;
byte pinLed=2;
int valueCds;

void setup()
{
  pinMode(pinLed,OUTPUT);
}

void loop()
{
  valueCds=analogRead(pinCds);
  if(valueCds>1100)
    digitalWrite(pinLed,HIGH);
  else
    digitalWrite(pinLed,LOW);
}
