 #include <SoftwareSerial.h>

int sensorPin = A0; // select the input pin for the LDR

int sensorValue = 0; // variable to store the value coming from the sensor

int led = 3;

void setup() 
{
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

void loop()

{

Serial.println("LDR");

sensorValue = analogRead(sensorPin);

Serial.println(sensorValue);

if (sensorValue < 140)

{

Serial.println("LED light on");

digitalWrite(led,HIGH);

delay(1000);

}
else
{
  digitalWrite(led,LOW);
}
//delay(sensorValue);

}
