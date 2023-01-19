  
  #include <dht.h> //librarie pentru senzorul de temperatura
  #include <LiquidCrystal.h> //librarie pentru ecran LCD
  const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7); // intializare ecran LCD
  dht DHT;
  #define DHT11_PIN 7  //definire pin care monitorizeaza temperatura si umiditatea
