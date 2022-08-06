int p=8;
void setup() {
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
int l=p&0x08;
if(l)digitalWrite(0,HIGH);
else digitalWrite(0,LOW);

l=p&0x04;
if(l)digitalWrite(1,HIGH);
else digitalWrite(1,LOW);

l=p&0x02;
if(l)digitalWrite(2,HIGH);
else digitalWrite(2,LOW);

l=p&0x01;
if(l)digitalWrite(3,HIGH);
else digitalWrite(3,LOW);
delay(1000);
p>>=1;
if(!p)p=4;
}
