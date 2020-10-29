#define D2 CO2_pin
#define D3 T_pin
#define D4 CO2_led_1
#define D5 CO2_led_2
#define D6 Co2_led_3
#define D7 T_led_1
#define D8 T_led_2
#define D9 T_led_3

void setup() {
  pinMode(CO2_pin, INPUT);//Датчик CO2 
  pinMode(T_pin,INPUT);//Датчик температуры
  pinMode(CO2_led_1,OUTPUT);//Первый светодиод указывающий на уровень CO2
  pinMode(CO2_led_2,OUTPUT);//Второй светодиод указывающий на уровень CO2
  pinMode(CO2_led_3,OUTPUT);//Третий светодиод указывающий на уровень CO2
  
  pinMode(T_led_1,OUTPUT);//Первый светодиод указывающий на температуру
  pinMode(T_led_2,OUTPUT);//Второй светодиод указывающий на температуру
  pinMode(T_led_3,OUTPUT);//Третий светодиод указывающий на температуру
  int Tl1 = 0,
      Tl2 = 12,
      Tl3 = 25;
  int CO2_l1 = 150,
      CO2_l2 = 400,
      CO2_l3 = 650;
}

void loop() {
  int T_level = digitalRead(T_pin);// wait for a second
  int CO2_level = digitalRead(CO2_pin);
  digitalWrite(T_led_1, T_level > Tl1);
  digitalWrite(T_led_2, T_level > Tl2);
  digitalWrite(T_led_3, T_level > Tl3);
  
  digitalWrite(CO2_led_1, CO2_level > CO2_l1);
  digitalWrite(CO2_led_2, CO2_level > CO2_l2);
  digitalWrite(CO2_led_3, CO2_level > CO2_l3);
  delay(250);
}
