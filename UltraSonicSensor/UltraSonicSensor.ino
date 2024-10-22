int trig=8,echo=7;

void setup()
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  pulseGenerator();
  int duration=pulseIn(echo,HIGH);
  Serial.println("Duration is : ");
  Serial.println(duration);
  
  duration=duration/2;
  
  double dist=duration * 0.033;
  Serial.print(dist);
}

void pulseGenerator()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2); 
}