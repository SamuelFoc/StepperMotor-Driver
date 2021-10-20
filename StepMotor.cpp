#include "stepMotor.h"
int SMD::StepMotor::GetStepsPerRevolution() const
{
    return stepsPerRevolution;
}

void SMD::StepMotor::SetStepsPerRevolution(int steps)
{
  if (steps >= 0)
    stepsPerRevolution = steps;
}

int SMD::StepMotor::GetDelayTimeBetweenRevolutions() const
{
    return delayTimeBetweenRevolutions;
}

void SMD::StepMotor::SetDelayTimeBetweenRevolutions(int delayTimeInMiliseconds)
{
  if (delayTimeInMiliseconds >= 0)
    delayTimeBetweenRevolutions = delayTimeInMiliseconds;
}

void SMD::StepMotor::DoRevolutions(int amount)
{
  for (int i = 1; i <= amount; i++)
      DoOneRevolution();  
}