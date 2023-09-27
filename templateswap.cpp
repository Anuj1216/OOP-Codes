#include <iostream>
template <class T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
main()
{
	int x = 5, y = 6;
	swap(x, y);
	std::cout<<"Swapped Integers: "<<"x = "<<x<<"\ty = "<<y<<std::endl;
	float p = 5.5, q = 6.5;
	swap(p, q);
	std::cout<<"Swapped Floats: "<<"p = "<<p<<"\tq = "<<q<<std::endl;
	char c = 'A'; char d = 'B';
	swap(c , d);
	std::cout<<"Swapped Strings: "<<"c = "<<c<<"\td = "<<d<<std::endl;
	return 0;
}
