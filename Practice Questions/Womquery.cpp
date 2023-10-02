#include<iostream>
using namespace std;
class Employee{
	char name[30];
	float salary;
	char address[20];
	public:
		void get_data() {
			cout<<"Name of the employee \n";
			cin>>name;
			cout<<"Salary of the employee is \n";
			cin>>salary;
			cout<<"Address of the employee \n";
			cin>>address;
		}
		void display_data();
		
};
 void Employee :: display_data(){
 	cout<<"Name ="<<name <<endl;
	cout<<"Salary ="<<salary <<endl;
	cout<<"Address ="<<address <<endl;
	
}
int main(){
	Employee e;
	e.get_data();
	e.display_data();
}
