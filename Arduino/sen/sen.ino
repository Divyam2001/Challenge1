int x=2;
int y=13;

void setup()
{
  Serial.begin(9600);
  pinMode(x,INPUT);
  pinMode(y,OUTPUT);
}
void loop()
{
  int x=digitalRead(x);
  if(x==1)
  {
    digitalWrite(y,HIGH);
  }
  else
  {
    digitalWrite(y,LOW);
  }
}

