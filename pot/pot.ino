int sensorPin = A0;    // select the input pin for the potentiometer
int led = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the led as an OUTPUT:
  pinMode(led, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);

  // turn the led on
  digitalWrite(led, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);

  // turn the led off:
  digitalWrite(led, LOW);
  delay(sensorValue);
}
