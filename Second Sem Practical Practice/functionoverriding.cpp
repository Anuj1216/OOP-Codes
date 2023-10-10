#include <iostream>
using namespace std;
class Base
{
    public:
        void display()
        {
            cout<<"Base Class Executed!";
        }
};
class Derived : public Base
{
    public:
        void display()
        {
            cout<<"Derived Class Executed";
        }
};
main()
{
    Derived d;
    d.display();
    d.Base::display();
    return 0;
}