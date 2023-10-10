#include <iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
    return a + b;
}
main()
{
    int a, b;
    float c, d;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Enter two floats: ";
    cin>>c>>d;
    cout<<"\nInteger Sum = "<<sum(a,b)<<endl;
    cout<<"Float Sum = "<<sum(c , d);
    return 0;
}