#include<iostream>
using namespace std;
class student
{
int roll;
float marks;
char name[20];
public:
void get_data()
{
cout<<"enter data"<<endl;
cin>>roll>>name>>marks;

}
void display()	
{
	cout<<"roll"<<roll<<endl;
	cout<<"name"<<marks<<endl;
	cout<<"marks"<<name;
	
}
};
main()
{
	student s;
	s.get_data();
	s.display();
}
