void setup() {
  Serial.begin(9600);
  //for analog dont need to declare pin using pinMode
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);//arduino supports upto 5v only
  int brightness = sensorValue / 4; //brightness is upto 256 only
  // 1023 / 4 = 255.75 but the .75 cuts off
  analogWrite(11, brightness);
  // print out the value you read:
  Serial.print("ADC reading: ");
  Serial.print(sensorValue);
  Serial.print(" Analog voltage: ");
  Serial.println(voltage);
  delay(100); // delay in between reads for stability
}