#include <iostream>
using namespace std;
class Test2;
class Test1
{
	int a;
	public:
		void get_data()
	 	{
			cout<<"Enter the value of a: ";
			cin>>a;
		}
		friend void compare(Test1, Test2);
};
class Test2
{
	int a;
	public: 
		void get_data()
		{
			cout<<"Enter the value of a: ";
			cin>>a;
		}
		friend void compare(Test1, Test2);
};
void compare(Test1 t1, Test2 t2)
{
	if(t1.a > t2.a)
	{
		cout<<"A from first class is greater.";
	}
	else if(t2.a > t1.a)
	{
		cout<<"A from second class is greater.";
	}
	else
	{
		cout<<"Both the input values are same.";
	}
}
main()
{
	Test1 t1;
	Test2 t2;
	t1.get_data();
	t2.get_data();
	compare(t1, t2);
}
