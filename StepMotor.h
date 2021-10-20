#ifndef __STEP_MOTOR__
#define __STEP_MOTOR__
namespace SMD
{
    class StepMotor
    {
        public:
            static const int DEFAULT_STEPS_PER_REVOLUTION = 900;
            virtual void Setup() = 0;
            void DoRevolutions(int amount) const;
            int GetStepsPerRevolution() const;
            void SetStepsPerRevolution(int steps);
            int GetDelayTimeBetweenRevolutions() const;
            void SetDelayTimeBetweenRevolutions(int delayTimeInMiliseconds);
        protected:
          void DoOneRevolution() const;
        private: 
            int stepsPerRevolution;
            int delayTimeBetweenRevolutions;
    };
} 
#endif //__STEP_MOTOR__