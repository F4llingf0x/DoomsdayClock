#include <Arduino.h>
#include "CustomisedServer.h"
#include "MotorDriver.h"

const int PIN1 = 5;
const int PIN2 = 4;
const int PIN3 = 0;
const int PIN4 = 2;
const bool defaultDirection = true;


void setup() {
  // put your setup code here, to run once:
  CustomisedServer customisedServer;
  MotorDriver motordriver(PIN1, PIN2, PIN3, PIN4, defaultDirection);
}

void loop() {
  // put your main code here, to run repeatedly:
  dnsServer.processNextRequest();
}

