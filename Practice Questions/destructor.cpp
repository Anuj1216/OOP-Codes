//pg to show the destructor  call such that it prints the message memory is earased
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
        Sample(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void display()
        {
            cout<<"A = "<<a<<"\tB = "<<b<<endl;
        }
        ~Sample()
        {
            cout<<"Memory is Erased!"<<endl;
        }
};
main()
{
    Sample S1, S2(2, 3);
    S1.display();
    S2.display();
    return 0;
}