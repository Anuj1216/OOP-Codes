#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
    int id;
    char name[20];
    float salary;
    public:
        void display()
        {
            cout<<"ID = "<<id<<"\tName = "<<name<<"\tSalary = "<<salary<<endl;
        }
        void enquiry();
};
void Employee::enquiry()
{
    Employee e;
    ifstream file("Emp.txt");
    int key;
    cout<<"Enter the ID to be displayed: ";
    cin>>key;
    file.read((char *)&e, sizeof(e));
    while(!file.eof())
    {
        if(key != e.id)
        {
            file.read((char *)&e, sizeof(e));
        }
        else
        {
            e.display();
            break;
        }
    };
    file.close();
};
main()
{
	Employee e;
	e.enquiry();
}

