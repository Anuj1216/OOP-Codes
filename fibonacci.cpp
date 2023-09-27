#include<iostream>
using namespace std;
main()
{
	int a,b,c,n;
	cout<<"Enter the no. of terms in Fibonacci Series: ";
	cin>>n;
	a = 0;
	b = 1;
	cout<<"Fibonacci Series: "<<endl;
	cout<<a<<" , "<<b<<" , ";
	for(int i = 2; i < n; i++)
	{
		c = a + b;
		cout<<c<<" , ";
		a = b;
		b = c;
	}
	return 0;
}
