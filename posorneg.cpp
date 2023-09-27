#include<iostream>
using namespace std;
main()
{
	int num;
	string check;
	cout<<"Enter any non-zero number to check: ";
	cin>>num;
	check = num>0?"Positive":"Negetive";
	cout<<"The given number is "<<check;
	return 0;
}
