#include <iostream>
using namespace std;
class Employee
{
    char name[20];
    int age;
    public:
        float salary;
        void get_data();
        void display();
};
void Employee::get_data()
    {
        cout<<"Enter the Name, Age and Salary: ";
        cin>>name>>age>>salary;
    }
void Employee::display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Salary = "<<salary<<endl;
    }
main()
{
    Employee e[5];
    for(int i = 0; i < 5; i++)
    {
        e[i].get_data();
    }
    for(int i = 0; i < 5; i++)
    {
        if(e[i].salary > 50000)
        {
            e[i].display();
        }
    }
    return 0;
}