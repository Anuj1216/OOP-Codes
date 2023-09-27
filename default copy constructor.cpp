#include <iostream>
using namespace std;
class Sample
{
	int a,b;
	public:
		Sample()
		{
			a = 5;
			b = 6;
		}
		void display()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b;
		}
};
main()
{
	Sample s1;
	Sample s2 = s1;
	s2.display();
}
