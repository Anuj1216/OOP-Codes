#include <iostream>
using namespace std;
template<class t>
class add
{
    t a, b;
    public:
        void get_data()
        {
            cout<<"Enter the values of a and b: ";
            cin>>a>>b;
        }
        t sum();
};
template <class t>
t add<t>::sum()
{
    return a + b;
}
main()
{
    add<int>a1;
    add<float>a2;
    cout<<"For Integer Sum: "<<endl;
    a1.get_data();
    cout<<"For Float Sum: "<<endl;
    a2.get_data();
    cout<<"Integer Sum = "<<a1.sum()<<endl;
    cout<<"Float Sum = "<<a2.sum()<<endl;
    return 0;
}