const int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED
const int pinoSensor = 5; //PINO DIGITAL UTILIZADO PELO SENSOR

void setup(){
  Serial.begin(9600);
  Serial.println("magnetico test!");
  pinMode(pinoSensor, INPUT_PULLUP); //DEFINE O PINO COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
  //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH)
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
}

void loop(){
  if(digitalRead(pinoSensor) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
      digitalWrite(pinoLed, HIGH); //ACENDE O LED
      Serial.println("hep");
  }else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
    Serial.println("nop");
    
  }
}
