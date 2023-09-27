#include<iostream>
using namespace std;
class constructor
{
	private:
	int l,b,area;
	public:
	data(int a,int b)
	{
		(*this).l=a;
		(*this).b=b;	
	}
	void find_area()	
	{
		area = l*b;
		cout<<"area: "<<area;	
	}
};
main()
{
	constructor c;
	c.data(5,6);
	c.find_area();
}
