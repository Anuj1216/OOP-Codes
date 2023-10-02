#include <iostream>
using namespace std;
template<class t>
t sum (t a, t b)
{
    return a + b;
}
main()
{
    int a,b;
    float c,d;
    cout<<"Enter any two integers: ";
    cin>>a>>b;
    cout<<"Enter any two floats: ";
    cin>>c>>d;
    cout<<"Integer Sum = "<<sum(a,b)<<endl;
    cout<<"Float Sum = "<<sum(c,d)<<endl;
    return 0;
}