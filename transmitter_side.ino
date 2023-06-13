int potpin=A0;
int led1=6;
void setup()
{
Serial.begin(9600);
pinMode(potpin,INPUT);
pinMode(led1,OUTPUT);
}

void loop()
{

int ldrval=analogRead(potpin);
  
  Serial.print("Analog input: "); 
  Serial.println(potval);  

  int ledval=0.749*potval;
  analogWrite(6, ledval); 
  Serial.print("pwm output: "); 
  Serial.println(ledval);  
}
}
