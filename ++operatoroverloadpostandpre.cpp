#include <iostream>
using namespace std;
class Sample
{
	int a;
	public:
		void get_data()
		{
			cout<<"Enter the value to be operated: ";
			cin>>a;
		}
		void operator ++ ()
		{
			++a;
		}
		void operator ++ (int)
		{
			a++;
		}
		void display()
		{
			cout<<"Value of a = "<<a<<endl;
		}
};
main()
{
	Sample s;
	s.get_data();
	s.display();
	cout<<"After preincrement: "<<endl;
	++s;
	s.display();
	cout<<"After postincrement: "<<endl;
	s++;
	s.display();
	return 0;
}
