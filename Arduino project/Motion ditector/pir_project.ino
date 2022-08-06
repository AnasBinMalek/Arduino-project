int pir = 5;
int buzzer = 7;
int state;
void setup()
{
  pinMode(pir,INPUT);
  pinMode(buzzer, OUTPUT);
}
void loop()
{
  state = digitalRead(pir);
  digitalWrite(buzzer,state);
}

