int d=2;   // to store on or off value
void setup()
{pinMode(2,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);

}
void loop()
{
d=digitalRead(2);
Serial.println(d);    
if(d==0)
{digitalWrite(13,HIGH);}
else
{digitalWrite(13,LOW);}
}
