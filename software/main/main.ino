void setup() {
  pinMode(D5, INPUT);//Датчик CO2
  pinMode(D2,INPUT);//Датчик температуры
  pinMode(D4,OUTPUT);//Первый светодиод указывающий на уровень CO2
  pinMode(D3,OUTPUT);//Второй светодиод указывающий на температуру
}
void loop() {
  int t = digitalRead(D5);// wait for a second
  int y = digitalRead(D2);
  if(t>500){
    digitalWrite(D4,HIGH);
    }
    else{
      digitalWrite(D4,LOW);
    }
    if(y>25){
      digitalWrite(D3,HIGH);
    }
    else{
      digitalWrite(D3,LOW);
    }
  
}
