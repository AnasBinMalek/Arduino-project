int trig = 5;
int echo = 7;
int led_rad = 9;
int led_green = 11;
int bazzar= 13;
float s;
float t;                                                                                                    
void setup()
{
  pinMode(bazzar,OUTPUT);
  pinMode(led_rad,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(bazzar,LOW);
  digitalWrite(led_rad,LOW);
  digitalWrite(led_green,LOW);
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  s=(t*0.0332)/2;
  if(s>15)
  {
    digitalWrite(led_green,HIGH);
  }
  else {
        digitalWrite(led_rad,HIGH);
        digitalWrite(bazzar,HIGH);
        }
  Serial.print("The distance is = ");
  Serial.print(s);
  Serial.println(" cm");
  delay(100);
}

