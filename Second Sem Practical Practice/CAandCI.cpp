#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int P, T, R, N;
    cout<<"Enter Principal, Time, Rate and Number of times interest compounded anually: ";
    cin>>P>>T>>R>>N;
    float CA = P * pow(1 + (float)R/(N * 100), N * T);
    float CI = CA - P;
    cout<<"Compound Amount = "<<CA<<"\nCompound Interest = "<<CI;
    return 0;
}