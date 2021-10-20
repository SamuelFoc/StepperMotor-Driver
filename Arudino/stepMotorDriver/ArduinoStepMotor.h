#ifndef __ARDUINO_STEP_MOTOR__
#define __ARDUINO_STEP_MOTOR__
#include "StepMotor.h"
namespace SMD
{
    class ArduinoStepMotor : public StepMotor 
    {
        private:
            int dirPin;
            int stepPin;
            int enablePin;
            int triggerPin;
            void Setup();
        protected:
          void DoOneRevolution() override;
        public:
            ArduinoStepMotor(int stepPin, int dirPin);
            void SetSpinningDirection(bool clockWise);
    };

}

#endif //__ARDUINO_STEP_MOTOR__
