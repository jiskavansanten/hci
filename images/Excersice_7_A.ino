float sensorValue = 0; 
int yellowLed = 9;
int sensorPin = A0; 
int greenled = 10;

void setup() {
 pinMode(sensorPin, INPUT); 
 Serial.begin(9600); 
}

void loop() {
 sensorValue = analogRead(sensorPin); 
 sensorValue = map(sensorValue, 650, 913, 0, 255); 
 Serial.println(sensorValue); 
 delay(20); 
}
