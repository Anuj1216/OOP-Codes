#include <iostream>
using namespace std;
class Employee
{
	string name;
	int age;
	public:
		float salary;
		void get_data()
		{
			cout<<"Enter the name, age & salary: ";
			cin>>name>>age>>salary;
		}
		void display()
		{
			cout<<"Name = "<<name<<"\tAge = "<<age<<"\tSalary = "<<salary<<endl;
		}
};
main()
{
	Employee E[5];
	for(int i = 0; i < 5; i++)
	{
		E[i].get_data();	
	}
	for(int i = 0; i < 5; i++)
	{
		if(E[i].salary > 50000)
		{
			E[i].display();
		}
	}	
}
