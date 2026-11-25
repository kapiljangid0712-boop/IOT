String readvoice;
int red=2;
int green=3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 while (Serial.available()){

  delay(10);
  char c = Serial.read();
  readvoice += c;

 }
  if (readvoice.length()>0){
    Serial.println(readvoice);
  if(readvoice == "red on"){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }
  else if (readvoice == "red off")
  {
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
  }
  else if (readvoice == "green on")
  {
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
  }
  else if (readvoice == "green off")
  {
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
  }
  readvoice="";
}
}
