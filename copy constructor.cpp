#include <iostream>
#include <string.h>
using namespace std;
class Student
{
	char name[20];
	int roll;
	float fee;
	public:
		Student()
		{
			strcpy(name, "Anuj");
			roll = 1;
			fee = 20000;
		}	
		Student(Student &pre)
		{
			roll = pre.roll;
			strcpy(name, pre.name);
			fee = pre.fee;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Roll = "<<roll<<endl;
			cout<<"Fee = "<<fee;
		}
};
main()
{
	Student s1;
	Student s2(s1);
	s2.display();
}
