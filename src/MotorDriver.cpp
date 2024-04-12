#include <Arduino.h>
#include "MotorDriver.h"

MotorDriver::MotorDriver(int pin1, int pin2, int pin3, int pin4, bool dir)
{
    stepNumber = 0;
    stepperPin1 = pin1;
    stepperPin2 = pin2;
    stepperPin3 = pin3;
    stepperPin4 = pin4;
    dir = dir;
    pinMode(stepperPin1, OUTPUT);
    pinMode(stepperPin2, OUTPUT);
    pinMode(stepperPin3, OUTPUT);
    pinMode(stepperPin4, OUTPUT);
}

void MotorDriver::OneStep()
{
    if (dir)
    {
        switch (stepNumber)
        {
        case 0:
            digitalWrite(stepperPin1, HIGH);
            digitalWrite(stepperPin2, LOW);
            digitalWrite(stepperPin3, LOW);
            digitalWrite(stepperPin4, LOW);
            break;
        case 1:
            digitalWrite(stepperPin1, LOW);
            digitalWrite(stepperPin2, HIGH);
            digitalWrite(stepperPin3, LOW);
            digitalWrite(stepperPin4, LOW);
            break;
        case 2:
            digitalWrite(stepperPin1, LOW);
            digitalWrite(stepperPin2, LOW);
            digitalWrite(stepperPin3, HIGH);
            digitalWrite(stepperPin4, LOW);
            break;
        case 3:
            digitalWrite(stepperPin1, LOW);
            digitalWrite(stepperPin2, LOW);
            digitalWrite(stepperPin3, LOW);
            digitalWrite(stepperPin4, HIGH);
            break;
        }
    }
    else
    {
        switch (stepNumber)
        {
        case 0:
            digitalWrite(stepperPin1, LOW);
            digitalWrite(stepperPin2, LOW);
            digitalWrite(stepperPin3, LOW);
            digitalWrite(stepperPin4, HIGH);
            break;
        case 1:
            digitalWrite(stepperPin1, LOW);
            digitalWrite(stepperPin2, LOW);
            digitalWrite(stepperPin3, HIGH);
            digitalWrite(stepperPin4, LOW);
            break;
        case 2:
            digitalWrite(stepperPin1, LOW);
            digitalWrite(stepperPin2, HIGH);
            digitalWrite(stepperPin3, LOW);
            digitalWrite(stepperPin4, LOW);
            break;
        case 3:
            digitalWrite(stepperPin1, HIGH);
            digitalWrite(stepperPin2, LOW);
            digitalWrite(stepperPin3, LOW);
            digitalWrite(stepperPin4, LOW);
        }
    }
    stepNumber++;
    if (stepNumber > 3)
    {
        stepNumber = 0;
    }
}
