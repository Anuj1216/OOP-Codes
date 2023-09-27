#include <iostream>
using namespace std;
float area(float ba, float h)
{
	float area = (ba * h)/2;
	return area;
}
int area(int l, int b)
{
	int area = l * b;
	return area;
}
main()
{
	int l,b;
	float ba,h;
	cout<<"Enter the base of triangle: ";
	cin>>ba;
	cout<<"Enter the height of triangle: ";
	cin>>h;
	cout<<"Enter the length of rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of rectangle: ";
	cin>>b;
	cout<<"Area of Triangle = "<<area(ba,h)<<endl;
	cout<<"Area of Rectangle = "<<area(l,b)<<endl;
	return 0;
}
