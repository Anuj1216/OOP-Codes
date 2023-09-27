#include <iostream>
using namespace std;
template<class t>
t sum(t a, t b)
{
	return a + b;
}
main()
{
	cout<<"Integer Sum = "<<sum(5,6)<<endl;
	cout<<"Float Sum = "<<sum(5.5,6.5)<<endl;
	cout<<"String Sum(ASCII Value) = "<<sum('A', 'B');
}

