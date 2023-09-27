#include <iostream>
using namespace std;
class Add
{
	int a,b;
	public:
		void get_data()
		{
			cout<<"A = ";
			cin>>a;
		}
		void operator + (Add a5)
		{
			a = a + a5.a;
			cout<<"A = "<<a<<endl;
		}
};
main()
{
	Add a1,a2;
	a1.get_data();
	a2.get_data();
	a1 + a2;
}
