#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;
template <class T1, class T2>
T1 max(T1 a, T2 b)
{
	return a>b?a:b;
}
char *max(char *a, char*b)
{
	return strcmp(a,b)>0?a:b;
}
main()
{
	cout<<"max(4,6)= "<<max(4,6)<<endl;
	cout<<"max(5.5,3.8)= "<<max(5.5,3.8)<<endl;
	cout<<"max(\"Arjun\", \"Gayatri\")= "<<max("Arjun", "Gayatri")<<endl;
	getch();
	return 0;
}
