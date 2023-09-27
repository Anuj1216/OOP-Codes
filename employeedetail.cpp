#include <iostream>
using namespace std;
class Employee
{
	string name;
	int age;
	float salary;
	public:
		void get_data()
		{
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age: ";
			cin>>age;
			cout<<"Enter the salary: ";
			cin>>salary;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Age = "<<age<<endl;
			cout<<"Salary = "<<salary<<endl;
		}
};
main()
{
	Employee E;
	E.get_data();
	cout<<"Details of Employee is shown below:"<<endl;
	E.display();
	return 0;
}
