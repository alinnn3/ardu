#include <dht.h> //librarie pentru senzorul de temperatura
#include <LiquidCrystal.h> //librarie pentru ecran LCD
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); // intializare ecran LCD
dht DHT;
#define DHT11_PIN 7  //definire pin care monitorizeaza temperatura si umiditatea




void setup(){

 lcd.begin(16,2);

}
void loop(){
  
  if (start==2){
    start=0;
  }
}
int fa=0;
  int temp=10;
  float chk;
  int start = 0; 
  unsigned long previousTime = 0; //declarare variabile
void setup() {
  lcd.begin(16,2);
  pinMode(13, INPUT);
  pinMode(10, INPUT);
  pinMode(8, OUTPUT);
  pinMode(6 , INPUT);
  pinMode(52, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(49, OUTPUT);
  lcd.setCursor(0,0); 
}

void loop(){
  if (start==2){
    start=0;
  }
}
  void loop(){
  int fa=0;
  int temp=0;
  float chk;
  int start = 0; 
  unsigned long previousTime = 0; //declarare variabile
void setup() {
  lcd.begin(16,2);
  pinMode(13, INPUT);
  pinMode(10, INPUT);
  pinMode(8, OUTPUT);
  pinMode(6 , INPUT);
  pinMode(9, INPUT); // definire pinului daca este de intrare sau iesire
  lcd.setCursor(0,0); 
    }
}