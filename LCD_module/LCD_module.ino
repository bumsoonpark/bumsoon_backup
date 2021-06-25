#include <LiquidCrystal_I2C.h>



LiquidCrystal_I2C lcd(0x27, 16, 2);  //Should be select 0x3F or 0x27

void setup() {
  // put your setup code here, to run once:
  
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Welcome to");
  lcd.setCursor(3,1);
  lcd.print("the My House!");

}
