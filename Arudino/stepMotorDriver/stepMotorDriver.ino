#include "StepMotorDriver.h"
using namespace SMD;

#define DIR_PIN 10
#define STEP_PIN 11
#define ENABLE_PIN 5
#define TRIGGER_PIN 8

StepMotor* stepMotor = nullptr;

void setup() {
  stepMotor = new ArduinoStepMotor(STEP_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
}
