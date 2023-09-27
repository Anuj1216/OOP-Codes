#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
    int id;
    char name[20];
    float salary;
    public:
        void get_data()
        {
            cout<<"Enter Employee's ID, Name & Salary: ";
            cin>>id>>name>>salary;
        }
        void display_data()
        {
            cout<<"ID = "<<id<<"\tName = "<<name<<"\tSalary = "<<salary<<endl;
        }
};
int main()
{
    Employee e;
    // ofstream file("Emp.txt");
    // if(!file)
    // {
    //     cerr<<"Error Opening File!"<<endl;
    //     return 1;
    // }
    // char choice;
    // do
    // {
    //     e.get_data();
    //     file.write((char *)&e, sizeof(e));
    //     cout<<"One Row Created!"<<endl;
    //     cout<<"Do you want more data? (y/n):  ";
    //     cin>>choice;
    // } while(choice == 'y' || choice == 'Y');
    // file.close();
    ifstream file("Emp.txt");
    if(!file)
    {
        cerr<<"Error Opening File!"<<endl;
        return 1;
    }
    file.read((char *)&e, sizeof(e));
    e.display_data();
    file.close();
    return 0;
}
