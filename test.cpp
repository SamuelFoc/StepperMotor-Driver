#include <iostream>
using namespace std;

class Base
{
    public:
        void CallPrint()
        {
            cout << "Calling pring" << endl;
            Print();
        }
        void virtual Print()
        {
            cout << "Hello from base" << endl;
        }
};

class Derived : public Base
{
    private:
        int x = 10;
    public:
        void virtual Print() override
        {
            cout << "Hello from derived. Btw x is " << x << endl;
        }
};

int main()
{
    Base* b = new Base();
    Base* d = new Derived();
    
    b->CallPrint();
    d->CallPrint();
}