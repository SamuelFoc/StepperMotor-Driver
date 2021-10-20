#include "Arduino.h"
#include "ArduinoStepMotor.h"
SMD::ArduinoStepMotor::ArduinoStepMotor(int stepPin) : stepPin(stepPin)
{ }


void SMD::ArduinoStepMotor::Setup()
{
    pinMode(stepPin, OUTPUT);
    SetStepsPerRevolution(DEFAULT_STEPS_PER_REVOLUTION)
}

void SMD::ArduinoStepMotor::DoOneRevolution()
{
    for (int i = 0; i < GetStepsPerRevolution(); i++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(300);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(300);          
    }
}