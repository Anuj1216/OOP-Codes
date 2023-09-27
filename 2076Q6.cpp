#include<iostream>
using namespace std;
class Sample
{
    int a,b;
    public:
        Sample()
        {
            a = 5;
            b = 4;
        }
        void display()
        {
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
        }
        ~Sample()
        {
            cout<<"Memory is Released!";
        }
};
main()
{
    Sample s;
    s.display();
    return 0;
}