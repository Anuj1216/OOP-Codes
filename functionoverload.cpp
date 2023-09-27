#include <iostream>
#define Pi 3.14
using namespace std;
float area(int r)
{
	return Pi*r*r;
}
int area(int l, int b)
{
	return l*b;
}
main()
{
	int r,l,b;
	cout<<"Enter radius of circle: ";
	cin>>r;
	cout<<"Enter length of rectangle: ";
	cin>>l;
	cout<<"Enter breadth of rectangle: ";
	cin>>b;
	cout<<"Area of Circle is: "<<area(r)<<endl;
	cout<<"Area of Ractangle is: "<<area(l,b);
	return 0;
}
