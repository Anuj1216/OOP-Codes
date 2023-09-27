#include <iostream>
using namespace std;
main()
{
	int num;
	string check;
	cout<<"Enter any non-zero number to check: ";
	cin>>num;
	if(num == 0)
	{
		cout<<"Given number is neutral(Zero)";
	}
	check = num>=1?"Positive":"Negetive";
	cout<<"The given number is "<<check;
	return 0;
}
