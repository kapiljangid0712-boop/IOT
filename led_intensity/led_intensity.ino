int blue=6;
void setup() {
  pinMode(blue,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for(int i=0; i<=255; i+=5){
    analogWrite(blue,i);
    delay(50);
  }
  // put your main code here, to run repeatedly:
    analogWrite(blue,0);
    delay(500);
}
