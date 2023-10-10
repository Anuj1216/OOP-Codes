#include <iostream>
using namespace std;
main()
{
    int n;
    int a = 0, b = 1, c = 0;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    cout<<"Fibonacci Series: \n";
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i < n; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return 0;
}