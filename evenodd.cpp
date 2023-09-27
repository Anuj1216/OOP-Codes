#include<iostream>
using namespace std;
main()
{
	int num;
	string check;
	cout<<"Enter any non-negetive number to check: ";
	cin>>num;
	check = num%2==0?"Even":"Odd";
	cout<<"Given number is "<<check;
	return 0;
}
