#include <Arduino.h>
int value = 0;

void setup()
{
  Serial.begin(9600);

  // put your setup code here, to run once:
}

void loop()
{
  Serial.println(value);
  value++;
  delay(1000);
  // put your main code here, to run repeatedly:
}