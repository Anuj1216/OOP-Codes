#include <iostream>
#include <cmath>
using namespace std;
template <class t>
t find_SI(t P, t T, t R)
{
    return (P * T * R) / 100;
}
template <class t>
t find_CI(t P, t T, t R)
{
    return P * (pow((1 + (float)R/100), T)) - P;
}
main()
{
    int P, T, R;
    cout<<"Enter value of P, T and R: ";
    cin>>P>>T>>R;
    cout<<"SI = "<<find_SI(P, T, R);
    cout<<"CI = "<<find_CI(P,T,R);
    return 0;
}