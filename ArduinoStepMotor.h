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
        protected:
          void DoOneRevolution(int amount) override;
        public:
            ArduinoStepMotor(int stepPin);
            void DoRevolutions(int amount) override;
            void Setup() override;
    };

}

#endif //__ARDUINO_STEP_MOTOR__
