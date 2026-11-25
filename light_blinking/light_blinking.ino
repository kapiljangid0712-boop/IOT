int led=2;
int red=4;
int yel=3;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(red,OUTPUT);
pinMode(yel,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
digitalWrite(led,LOW);
digitalWrite(yel,LOW);
delay(100);
digitalWrite(red,LOW);
digitalWrite(led,HIGH);
digitalWrite(yel,LOW);
delay(100);
digitalWrite(red,LOW);
digitalWrite(led,LOW);
digitalWrite(yel,HIGH);
delay(100);

}
