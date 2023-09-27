#include<iostream>
using namespace std;
class Base
{
	public:
		void display()
		{
			cout<<"Base Class Function Executed"<<endl;
		}
};
class Derived : public Base
{
	public:
		void display()
		{
			cout<<"Derived class Function Executed"<<endl;
		}
};
main()
{
	Derived D;
	D.display();
	D.Base::display();
	return 0;
}
