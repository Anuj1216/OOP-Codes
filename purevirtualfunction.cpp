#include <iostream>
using namespace std;
class Base
{
    public:
        virtual void display() = 0;
};
class Derived1 : public Base
{
    public:
        void display()
        {
            cout<<"This is first Derived class!"<<endl;
        }
};
class Derived2 : public Base
{
    void display()
    {
        cout<<"This is second Derived class!"<<endl;
    }
};
main()
{
    Base *b;
    Derived1 d1;
    Derived2 d2;
    b = &d1;
    b -> display();
    b = &d2;
    b -> display();
    return 0;
}