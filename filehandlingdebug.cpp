#include<iostream>
#include <fstream>
using namespace std;
class Student
{
    int roll;
    char name[20];
    char address[40];
    public:
    void read_data();
    void write_data();

};
void Student::read_data(){
    cout<<"Enter roll:\n";
    cin>>roll;
    cout<<"Enter name:\n";
    cin>>name;
    cout<<"Enter address:\n";
    cin>>address;
    }
void Student::write_data(){
 cout<<"Roll: \n"<<roll;
cout<<"name: \n"<<name;
cout<<"address: \n"<<address;  
}
int main(){
    Student s;
    ofstream fout;
    fout.open("Stud.dat");
    for(int i=0;i<5;i++){
        s.read_data();
        fout.write((char*)&s,sizeof(Student));
    }
    fout.close();
    cout<<"Write completed!:"<<endl;
    return 0;
}