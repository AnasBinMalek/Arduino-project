int count=0;

void setup() {
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
int b=count&0x01;
if(b)digitalWrite(0,HIGH);
else digitalWrite(0,LOW);

 b=count&0x02;
if(b)digitalWrite(1,HIGH);
else digitalWrite(1,LOW);

 b=count&0x04;
if(b)digitalWrite(2,HIGH);
else digitalWrite(2,LOW);

b=count&0x08;
if(b)digitalWrite(3,HIGH);
else digitalWrite(3,LOW);

delay(1000);
count++;
}
