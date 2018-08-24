int m1=2;
int m2=3;
int m3=4;
int m4=5;
void setup()
{
  Serial.begin(9600);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT); 
}
void loop()
{
  if(Serial.available())
  {
    int x=Serial.read();
    if(x=='F')
    {
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m3,HIGH);
      digitalWrite(m4,LOW);
    }
    else if(x=='B')
     {
      digitalWrite(m1,LOW);
      digitalWrite(m2,HIGH);
      digitalWrite(m3,LOW);
      digitalWrite(m4,HIGH);
    }
    else if(x=='R')
     {
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(m3,LOW);
      digitalWrite(m4,HIGH);
    }
    else if(x=='L')
     {
      digitalWrite(m1,LOW);
      digitalWrite(m2,HIGH);
      digitalWrite(m3,HIGH);
      digitalWrite(m4,LOW);
    }
    else if(x=='S')
     {
      digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
      digitalWrite(m3,LOW);
      digitalWrite(m4,LOW);
    }
    }
    else
    {
      Serial.write("Send Data");
  }
}

