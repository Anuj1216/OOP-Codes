#include <iostream>
using namespace std;
#include <cmath>
template<class t>
t find_SI(t P, t T, t R)
{
    return (P * T * R) / 100;
}
template<class t>
t find_CI(t P, t T, t R)
{
    return P * (pow((1 + R / 100), T)) - P;
}
main()
{
    double P,T,R;
    cout<<"Enter Principal, Time and Rate to calculate SI & CI: ";
    cin>>P>>T>>R;
    cout<<"SI = "<<find_SI(P,T,R)<<endl;
    cout<<"CI = "<<find_CI(P,T,R);
    return 0;
}
