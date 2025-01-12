int buttonState=0;
const int buttonPin=2;
int ledOne=13;
int ledTwo=12;
int ledThree=8;

void setup()
{
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{	buttonState=digitalRead(buttonPin);
    if(buttonState==1)
    {
      
  digitalWrite(ledOne, HIGH);
  Serial.print("STOP\n");
  delay(2000);
  digitalWrite(ledOne,LOW);
  delay(500); 
      
  digitalWrite(ledTwo,HIGH);
  Serial.print("GET READY\n");
  delay(2000);
  digitalWrite(ledTwo,LOW);
  delay(500);
      
  digitalWrite(ledThree, HIGH);
  Serial.print("GO\n");
  delay(2000);
  digitalWrite(ledOne,LOW);
  delay(500);
    }
 
}
