#include <iostream>
using namespace std;
class Employee
{
	string name;
	int age;
	float salary;
	public:
		void get_data();
		void display();
};
	void Employee::get_data()
	{
		cout<<"Enter the name, age & salary : ";
		cin>>name>>age>>salary;
	}
	void Employee::display()
	{
		cout<<"Name = "<<name<<endl;
		cout<<"Age = "<<age<<endl;
		cout<<"Salary = "<<salary;
	}
main()
{
	Employee E;
	E.get_data();
	cout<<"Details of Employee is shown below:"<<endl;
	E.display();
	return 0;
}
