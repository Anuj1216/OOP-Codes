#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,t,r;
	float CI,CA;
	cout<<"Enter the value of principal,time and rate"<<endl;
	cin>>p>>t>>r;
	CA= p*(pow(1+(float)r/100,t));
	cout<<"CA="<<CA<<endl;
	CI=CA-p;
	cout<<"CI="<<CI;
}
