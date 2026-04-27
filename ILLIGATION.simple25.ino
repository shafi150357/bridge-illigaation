
const int soilSensor = A0;  
const int pumpPin = 7;       
int dryValue = 600;  
void setup() {
  pinMode(pumpPin, OUTPUT);
  pinMode(soilSensor,INPUT);
}
void loop() {
  int moisture = analogRead(soilSensor);
  if (moisture > dryValue) {
    digitalWrite(pumpPin, LOW);
  } 
  else {
    digitalWrite(pumpPin, HIGH);
  }
  delay(1000);
}