#include "UserInterface.h"
#include "Ardiono.h"

SMD::UserInterface::UserInterface(SMD::StepMotor* stepMotor, int trigPin, int enablePin) : m_stepMotor(stepMotor), m_trigPin(trigPin), m_enablePin(enablePin)
{
    Setup();
}

void SMD::UserInterface::Setup()
{
    pinMode(dirPin, OUTPUT);
    pinMode(enablePin, OUTPUT);
    pinMode(trigPin, INPUT);
    Serial.begin(9600);
}

void SMD::UserInterface::Start()
{
    int userInput = Serial.Read() - '0';
    if (IsTriggered())
    {
        MoveStepMotor();
    }

    switch (userInput)
    {
        case 1:
            Enable(true);
        case 2:
            MoveStepMotor();
        break;

    }
}

bool SMD::UserInterface::IsTriggered()
{
    return digitalRead(triggerPin) == HIGH;
}

void SMD::UserInterface::Enable(bool enable)
{
    digitalWrite(enablePin, enable ? HIGH : LOW);
}

void SMD::UserInterface::MoveStepMotor()
{
    m_stepMotor->DoRevolutions(1);
    Serial.println(2);
}