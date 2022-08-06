#include<LiquidCrystal.h>
LiquidCrystal lcd(5,6,7,8,9,10);
void setup()
{
  lcd.begin(16,2);
}
void loop()
{
  lcd.setCursor(2,0);
  lcd.print("Abdul Malek");
  lcd.setCursor(2,1);
  lcd.print("Helal Uddin");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(2,0);
  lcd.print("Sadeka Begum");
  lcd.setCursor(3,1);
  lcd.print("Alim Uddin");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(1,0);
  lcd.print("Anas bin Malek");
  lcd.setCursor(2,1);
  lcd.print("Abdul Malek");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(4,0);
  lcd.print("Sumaiya");
  lcd.setCursor(2,1);
  lcd.print("Abdul Malek");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(4,0);
  lcd.print("Suraiya");
  lcd.setCursor(2,1);
  lcd.print("Abdul Malek");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(0,0);
  lcd.print("Talha bin Malek");
  lcd.setCursor(2,1);
  lcd.print("Abdul Malek");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(1,0);
  lcd.print("Saad bin Malek");
  lcd.setCursor(2,1);
  lcd.print("Abdul Malek");
  delay(2000);
  lcd.clear();
  delay(1000);
  
  lcd.setCursor(1,0);
  lcd.print("Muaj bin Malek");
  lcd.setCursor(2,1);
  lcd.print("Abdul Malek");
  delay(2000);
  lcd.clear();
  delay(1000);
  
}

