# define pir 13
# define led 12


bool pir_val=0;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
}

void loop(){
  pir_val = digitalRead(pir);
  if (pir_val == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}