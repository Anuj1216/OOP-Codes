#include <iostream>
using namespace std;
int great(int a, int b, int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
main()
{
	int a,b,c;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter third number: ";
	cin>>c;
	cout<<"Greatest number is: "<<great(a,b,c);
}
