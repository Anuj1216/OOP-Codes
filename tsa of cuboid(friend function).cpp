#include<iostream>
using namespace std;
class Circle
{
	int r;
	public:
		void get_data()
		{
			cout<<"Enter the radius of Circle: ";
			cin>>r;
		}
		friend void area(Circle);
};
void area(Circle cir)
{
	float area;
	area = (3.14) * (cir.r) * (cir.r);
	cout<<"Area of Circle is: "<<area;
}
main()
{
	Circle c;
	c.get_data();
	area(c);
}
