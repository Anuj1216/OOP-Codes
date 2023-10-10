#include<iostream>
using namespace std;
main()
{
    int a, b;
    cout<<"Enter the divident and divisor: ";
    cin>>a>>b;
    int quo = a / b;
    int rem = a % b;
    cout<<"Quotient = "<<quo<<"\tRemainder = "<<rem;
    return 0;
}