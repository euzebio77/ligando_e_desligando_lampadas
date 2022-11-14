int led1 = 11;
int led2 = 12;
int led3 = 13;
int led4 = 10;
int led5 = 9;
int led6 = 6;
int led7 = 7;
int led8 = 8;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);  
  pinMode(led6,OUTPUT); 
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);  
 
  Serial.begin(9600);
}

void loop()
{
 char c = Serial.read();
 if (c == '1') digitalWrite(led1,HIGH);
 if (c == '2') digitalWrite(led2,HIGH);
 if (c == '3') digitalWrite(led3,HIGH);
 if (c == '4') digitalWrite(led4,HIGH);
 if (c == '5') digitalWrite(led5,HIGH); 
 if (c == '6') digitalWrite(led6,HIGH); 
 if (c == '7') digitalWrite(led7,HIGH);
 if (c == '8') digitalWrite(led8,HIGH); 
 
 if (c == 'A') digitalWrite(led1,LOW);
 if (c == 'B') digitalWrite(led2,LOW);
 if (c == 'C') digitalWrite(led3,LOW);
 if (c == 'E') digitalWrite(led4,LOW);
 if (c == 'F') digitalWrite(led5,LOW);
 if (c == 'G') digitalWrite(led6,LOW);
 if (c == 'H') digitalWrite(led7,LOW);
 if (c == 'I') digitalWrite(led8,LOW);
 delay(1000);
}
