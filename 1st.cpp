#include <iostream>
using namespace std;
class employee
{
	int id;
	char name[30];
	float salary;
	public:
		void get_data()
		{
			cout<<"Enter Data: "<<endl;
			cin>>id>>name>>salary;
		}
		void display()
		{
			cout<<"ID= "<<id<<endl;
			cout<<"Name= "<<name<<endl;
			cout<<"Salary= "<<salary;
		}
};
main()
{
	employee e;
	e.get_data();
	e.display();
}

