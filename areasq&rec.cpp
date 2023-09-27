#include <iostream>
using namespace std;
int area(int s)
{
	int area = s * s;
	return area;
}
int area(int l, int b)
{
	int area = l * b;
	return area;
}
main()
{
	int l,b,s;
	cout<<"Enter the length of sides of square: ";
	cin>>s;
	cout<<"Enter the length of rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of rectangle: ";
	cin>>b;
	cout<<"Area of Square = "<<area(s)<<endl;
	cout<<"Area of Rectangle = "<<area(l,b)<<endl;
	return 0;
}
