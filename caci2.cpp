#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,t,r,n;
	float CI,CA;
	cout<<"Enter the value of principal,time,rate and compounded per year"<<endl;
	cin>>p>>t>>r>>n;
	CA= p*(pow(1+(float)r/(n*100),n*t));
	cout<<"CA="<<CA<<endl;
	CI=CA-p;
	cout<<"CI="<<CI;
}
