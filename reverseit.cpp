#include <iostream>
#include <string.h>
using namespace std;
class Reverse
{
	string a;
	public:
		void get_string()
		{
			cout<<"Enter the string to be reversed: ";
			cin>>a;
		}
		string reverseit()
		{
			int l = a.size();
			for (int i = 0; i < l/2; i++)
			{
				swap(a[i],a[l-i-1]);
			}
			cout<<"The reversed string is: "<<a;	
		}
};
main()
{
	Reverse R;
	R.get_string();
	R.reverseit();
	return 0;
}
