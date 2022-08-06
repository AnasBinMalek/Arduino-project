void setup()
{
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  //println("0");
  delay(1000);

  digitalWrite(7,HIGH);
   // println("1");
  delay(1000);

  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  //println("2");
  delay(1000);

  digitalWrite(7,HIGH);
    //println("3");
  delay(1000);

  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
    //println("4");
  delay(1000);

  digitalWrite(7,HIGH);
    //println("5");
  delay(1000);

  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
    //println("6");
  delay(1000);

  digitalWrite(7,HIGH);
    //println("7");
  delay(1000);

  
  
}

