#include <iostream>
using namespace std;
class Sample
{
    int a;
    public:
        void get_data()
        {
        cout<<"Enter the value: ";
        cin>>a;
        }
        void operator ++ ()
        {
            ++a;
        }
        void operator ++ (int)
        {
            a++;
        }
        void display()
        {
            cout<<"Value of A = "<<a<<endl;
        }
};
main()
{
    Sample s;
    s.get_data();
    s++;
    s.display();
    ++s;
    s.display();
    return 0;
}