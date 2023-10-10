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
            cout<<"Enter the Name, Age and Salary: ";
            cin>>name>>age>>salary;
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
    Employee e;
    e.get_data();
    e.display();
    return 0;
}