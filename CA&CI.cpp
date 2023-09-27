#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int P,T,R,N;
	cout<<"Enter the principal amount: ";
	cin>>P;
	cout<<"Enter the time period(in years): ";
	cin>>T;
	cout<<"Enter the rate of interest: ";
	cin>>R;
	cout<<"Enter the no. of times the interest is compounded annually: ";
	cin>>N;
	float CA = P * (pow(1 + (float)R/(N*100), N*T));
	float CI = CA - P;
	cout<<"The Compound Amount is "<<CA<<endl;
	cout<<"The Compound Interest is "<<CI<<endl;
	return 0;
}
