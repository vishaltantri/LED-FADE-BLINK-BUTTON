void setup() {
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int fade=0;fade<=255;fade+=5){
    analogWrite(11,fade);
    analogWrite(3,fade);
    delay(50);
  }
  for(int fade=255;fade>0;fade-=2){
    analogWrite(11,fade);
    analogWrite(3,fade);
    delay(50);
  }

}