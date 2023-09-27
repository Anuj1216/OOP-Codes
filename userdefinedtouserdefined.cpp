#include <iostream>
#include<cmath>
using namespace std;
class Polar
{
	int r, the;
	public:
		Polar()
		{
			r = 0;
			the = 0;
		}
		Polar(int r1, int the1)
		{
			r = r1;
			the = the1;
		}
		int getter()
		{
			return r;
		}
		int setter()
		{
			return the;
		}
		void display()
		{
			cout<<"r = "<<r<<"\t theta = "<<the<<endl;
		}
};
class Rectangular
{
	int x,y;
	public:
		Rectangular()
		{
			x = 0;
			y = 0;
		}
		Rectangular(int x1, int y1)
		{
			x = x1;
			y = y1;
		}
		Rectangular(Polar P)
		{
			int r1, the1;
			r1 = P.getter();
			the1 = P.setter();
			x = r1 * cos(the1);
			y = r1 * cos(the1);
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
int main()
{
	Polar P(3,60);
	Rectangular R;
	cout<<"Value of Polar Coordinate: "<<endl;
	P.display();
	R = P;
	cout<<"Value of Rectangular Coordinate: "<<endl;
	R.display();
	return 0;
}
