#include <iostream>
using namespace std;
class Student
{
	string name;
	int roll;
	public:
		void get_detail()
		{
			cout<<"Enter the name of student: ";
			cin>>name;
			cout<<"Enter the roll no. of student: ";
			cin>>roll;
		}
		void display_detail()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Roll = "<<roll<<endl;
		}
};
class Marks : public Student
{
	int OOP, DS, MP, STA, MTH;
	public:
		void get_marks()
		{
			cout<<"Enter the marks of OOP: ";
			cin>>OOP;
			cout<<"Enter the marks of DS: ";
			cin>>DS;
			cout<<"Enter the marks of MP: ";
			cin>>MP;
			cout<<"Enter the marks of STA: ";
			cin>>STA;
			cout<<"Enter the marks of MTH: ";
			cin>>MTH;
		}
		void display_marks()
		{
			cout<<"OOP = "<<OOP<<endl;
			cout<<"DS = "<<DS<<endl;
			cout<<"MP = "<<MP<<endl;
			cout<<"STA = "<<STA<<endl;
			cout<<"MTH = "<<MTH<<endl;
		}
};
main()
{
	Marks M;
	M.get_detail();
	M.get_marks();
	cout<<"Student's Detail: "<<endl;
	M.display_detail();
	cout<<"Student's Marks: "<<endl;
	M.display_marks();
	return 0;
}
