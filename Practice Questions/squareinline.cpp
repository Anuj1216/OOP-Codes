//Program to find square of a given integer using Inline Function
#include <iostream>
using namespace std;
inline void square(int a)
{
    int s = a * a;
    cout<<"The square of "<<a<<" is "<<s<<".";
}
main()
{
    int a;
    cout<<"Enter the number to get square of: ";
    cin>>a;
    square(a);
    return 0;
}
