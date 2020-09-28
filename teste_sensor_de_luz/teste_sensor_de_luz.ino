void setup()

{

  Serial.begin(9600);

}

void loop()

{

  unsigned int AnalogValue;

  AnalogValue = analogRead(A0);
  Serial.println(AnalogValue);

  if(AnalogValue <=35){
    digitalWrite(7,LOW);
  }else{
    digitalWrite(7,HIGH);
  }

}
