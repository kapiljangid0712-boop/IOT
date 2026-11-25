int RED=2;
int GREEN=3;
void setup(){
  Serial.begin(9600);
  delay(1000);
  pinMode(RED, OUTPUT);
  pinMode(GREEN,OUTPUT);
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,LOW);
  Serial.println();
  Serial.println("Ready. Type red, green or off");
}  
void loop() {
  if (Serial.available()> 0){
    String input = Serial.readStringUntil('\n');
    Serial.print("Received :");
    Serial.println(input);
    if(input == "RED")
    {
      Serial.println("RED");
      digitalWrite(RED,HIGH);
      digitalWrite(GREEN,LOW);
    }
    else if(input == "green")
    {
      Serial.println("GREEN");
      digitalWrite(GREEN,HIGH);
      digitalWrite(RED,LOW);
    }
    else if(input == "on"){
      Serial.println("on");
      digitalWrite(GREEN,HIGH);
      digitalWrite(RED,HIGH);
    }
    else if (input == "off")
    {
      Serial.println("off");
      digitalWrite(GREEN,LOW);
      digitalWrite(RED,LOW);
    }
    else if (input =="blink" )
    {
    Serial.println("blink");
    digitalWrite(GREEN,HIGH);
    digitalWrite(RED,LOW);
    delay(100);
    digitalWrite(GREEN,LOW);
    digitalWrite(RED,HIGH);
    delay(100);
    }
    
  }
}

  
