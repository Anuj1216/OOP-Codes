#include <iostream>
using namespace std;
class Person
{
    char name[20];
    char gender [20];
    public:
        void get_data()
        {
            cout<<"Enter the name and gender: ";
            cin>>name>>gender;
        }
        void display()
        {
            cout<<"Name = "<<name<<"\tGender = "<<gender;
        }
};
class Employee : public Person
{
    char designation[20];
    float salary;
    public:
        void get_data()
        {
            cout<<"Enter the designation and salary: ";
            cin>>designation>>salary;
        }
        void display()
        {
            cout<<"\tDesignation = "<<designation<<"\tSalary = "<<salary;
        }
};
class Birthday : public Employee
{
    int age;
    public:
        void get_data()
        {
            cout<<"Enter the age: ";
            cin>>age;
        }
        void display()
        {
            cout<<"\tAge = "<<age;
        }
};
main()
{
    Birthday b;
    b.Person::get_data();
    b.Birthday::get_data();
    b.Employee::get_data();
    b.Person::display();
    b.Birthday::display();
    b.Employee::display();
    return 0;
}