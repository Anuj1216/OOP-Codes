#include <iostream>
using namespace std;
class Employee
{
	char name[20];
	int age;
	float salary;
	public:
		void get_data()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
			cout<<"Enter Salary: ";
			cin>>salary;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
main()
{
	int i, c=0;
	Employee e[10];
	for(i=0; i<10; i++)
	{
		e[i].get_data();
	}
	for(i=0; i<10; i++)
	{
		if(e[i].salary > 20000)
		{
			e[i].display();
			c++;
		}
	}
	cout<<"Therefore, The no. of employees with salary more than 20000 is: "<<c;
}
