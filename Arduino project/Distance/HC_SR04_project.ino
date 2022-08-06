#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,2,3,4,5);
int trig = 6;
int echo=7;
int buzzer=8;
int led_r=9;
int led_g=10;
float t;
float d;

void setup()
{
  lcd.begin(16,2);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led_r,OUTPUT);
  pinMode(led_g,OUTPUT);
}

void loop()
{
  digitalWrite(buzzer,LOW);
  digitalWrite(led_r,LOW);
  digitalWrite(led_g,LOW);
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=(t*0.332)/2;
  lcd.setCursor(0,0);
  lcd.print("Distance ");
  lcd.print(d);
  lcd.print("cm");
  if(d<21&&d>9)
  {
    lcd.setCursor(2,1);
    lcd.print("Denger zone");
    digitalWrite(led_r,HIGH);
  }
    else if(d<10)
    {
      lcd.setCursor(0,1);
      lcd.print("Vary denger zone");
      digitalWrite(led_r,HIGH);
      digitalWrite(buzzer,HIGH);
    }
    else if(d>20&&d<31)
    {
      lcd.setCursor(2,1);
      lcd.print("Middle zone");
    }
    else
    {
      lcd.setCursor(4,1);
      lcd.print("Safe zone");
      digitalWrite(led_g,HIGH);
    }
  delay(500);
}

