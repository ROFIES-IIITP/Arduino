// C++ code
int sensorinput = A0;
int data =0;
void setup()
{
  Serial.begin(9600);
  pinMode(sensorinput,INPUT);
}

void loop()
{
  data=analogRead(sensorinput);
  Serial.println(data);
  if(data>=600)
  {
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    delay(1000);
  }
    else
  digitalWrite(9,LOW);
}