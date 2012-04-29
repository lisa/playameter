#include <SPI.h>
#include <LCDdogmSPI.h>

#define DEGREES  0xDF

#define PIN_BL_LEFT   4
#define PIN_BL_RIGHT  5

LCDdogmSPI lcd = LCDdogmSPI(3, 3, 2);

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  
  // turn on the backlight
  digitalWrite(PIN_BL_LEFT, HIGH);
  digitalWrite(PIN_BL_RIGHT, HIGH);
  
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  
  lcd.init();
  
  lcd.cursorTo(0,0);
  lcd.println("Temp:      21");
  lcd.print(DEGREES);
  lcd.println("C");
  
  lcd.cursorTo(1,0);
  lcd.println("Humidity:  62%");
  
  lcd.cursorTo(2,0);
  lcd.println("Ostriches: 5");
}

void loop() {
}
