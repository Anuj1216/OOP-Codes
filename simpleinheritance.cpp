#include <iostream>
using namespace std;
class Person
{
	string name;
	int age;
	public:
		void get_person()
		{
			cout<<"Enter the name and age of a person: ";
			cin>>name>>age;
		}
		void display_person()
		{
			cout<<"Name = "<<name<<"\t Age = "<<age;
		}
};
class Employee : public Person
{
	string designation;
	float salary;
	public:
		void get_employee()
		{
			cout<<"Enter the designation and salary of employee: ";
			cin>>designation>>salary;
		}
		void display_employee()
		{
			cout<<"\t Designation = "<<designation<<"\t Salary = "<<salary<<endl;
		}
};
main()
{
	Employee E;
	E.get_person();
	E.get_employee();
	E.display_person();
	E.display_employee();
	return 0;
}
