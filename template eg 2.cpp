#include <iostream>
using namespace std;
template <class t1, class t2>
float sum(t1 a, t2 b)
{
	return a+b;
}
main()
{
	cout<<"Int Sum = "<<sum(4,3)<<endl;
	cout<<"Float Sum = "<<sum(4.5,3.5)<<endl;
	cout<<"Comb Sum = "<<sum(4.5,3)<<endl;
	cout<<"Comb Sum 2 = "<<sum(4,3.5)<<endl;
}
