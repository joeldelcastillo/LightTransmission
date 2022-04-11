#include <Arduino.h>
#include "WiFi.h"
#include "ESPAsyncWebServer.h"

int value = 0;
const char *ssid = "Light";
const char *password = "";

void setup()
{
  Serial.begin(9600);
  Serial.print("Setting AP (Access Point)…");
  WiFi.softAP(ssid, password);
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  // put your setup code here, to run once:
}

void loop()
{
  Serial.println(value);
  value++;
  delay(1000);
  // put your main code here, to run repeatedly:
}