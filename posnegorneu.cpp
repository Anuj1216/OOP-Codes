#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter any number to check: ";
	cin>>a;
	if(a>0)
	{
		cout<<"Given number is Positive";
	}
	else if(a<0)
	{
		cout<<"Given number is Negetive";
	}
	else
	{
		cout<<"Given number is neutral(Zero)";
	}
	return 0;
}
