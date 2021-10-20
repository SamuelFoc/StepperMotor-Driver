#include "Arduino.h"
#include "ArduinoStepMotor.h"
SMD::ArduinoStepMotor::ArduinoStepMotor(int stepPin, int dirPin) : stepPin(stepPin), dirPin(dirPin)
{ 
  Setup();
}


void SMD::ArduinoStepMotor::Setup()
{
    pinMode(stepPin, OUTPUT);
    SetStepsPerRevolution(DEFAULT_STEPS_PER_REVOLUTION)
    SetSpinningDirection(true)
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

void SMD::ArduinoStepMotor::SetSpinningDirection(bool clockWise)
{
  digitalWrite(dirPin, clockWise ? HIGH : LOW);
}
