#include <iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the dividend: ";
	cin>>a;
	cout<<"Enter the divisor: ";
	cin>>b;
	int quo = a / b;
	int rem = a % b;
	cout<<"The quotient of the division is "<<quo<<endl;
	cout<<"The remainder of the division is "<<rem<<endl;
	return 0;
}
