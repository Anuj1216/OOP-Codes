#include <iostream>
using namespace std;
class Sample
{
	int a;
	public:
		void get_data()
		{
			cout<<"Enter the value: ";
			cin>>a;
		}
		void operator < (Sample s2)
		{
			(a < s2.a) ? cout<<"Lesser = "<<a : cout<<"Lesser = "<<s2.a<<endl;
		}
		void operator > (Sample s2)
		{
			(a > s2.a) ? cout<<"Greater = "<<a : cout<<"Greater = "<<s2.a<<endl;
		}
};
main()
{
	Sample s1, s2;
	s1.get_data();
	s2.get_data();
	s1 < s2;
	s1 > s2;
	return 0;
	
}
