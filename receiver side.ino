int ldrpin=A0;
int led1=6;
void setup()
{
Serial.begin(9600);
pinMode(ldrpin,INPUT);
pinMode(led1,OUTPUT);
}

void loop()
{

int ldrval=analogRead(ldrpin);
  
  Serial.print("Analog input: "); 
  Serial.println(ldrval);  

  int ledval=0.749*ldrval;
  analogWrite(6, ledval); 
  Serial.print("pwm input: "); 
  Serial.println(ledval);  
}
}
