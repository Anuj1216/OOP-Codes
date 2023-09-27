#include <iostream>
#include <math.h>
using namespace std;
class Volume
{
	float r,h;
	public:
		Volume()
		{
			r = 3;
		}
		Volume(float r)
		{
			(*this).r = r;
		}
		Volume(float r, float h)
		{
			(*this).r = r;
			(*this).h = h;
		}
		void find_sphere()
		{
			float vol = (4/3) * 3.14 * pow(r,3);
			cout<<"The volume of sphere is: "<<vol<<endl;
		}
		void find_cylinder()
		{
			float vol = 3.14 * pow(r,2) * h;
			cout<<"The volume of cylinder is: "<<vol<<endl;
		}
};
main()
{
	Volume v1;
	Volume v2(4);
	Volume v3(3,5);
	v1.find_sphere();
	v2.find_sphere();
	v3.find_cylinder();
}
