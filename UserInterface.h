#ifndef __USER_INTERFACE__
#define __USER_INTERFACE__
#include "StepMotorDriver.h"

namespace SMD{
    class UserInterface
    {
        private:
            SMD::StepMotor* m_stepMotor;
            int m_trigPin;
            int m_enablePin;
            void Setup();
            void MoveStepMotor();
        public:
            UserInterface(SMD::StepMotor* stepMotor, int trigPin, int enablePin);
            void Start();
            bool IsTriggered();
            void Enable(bool enable);
    };
}
#endif // __USER_INTERFACE__