#include <iostream>
using namespace std;
int area(int l)
{
    int area = l * l;
    return area;
}
int area(int l, int b)
{
    int area = l * b;
    return area;
}
main()
{
    int ls,lr,br;
    cout<<"Enter the lenght of square: ";
    cin>>ls;
    cout<<"Enter the lenght of rectangle: ";
    cin>>lr;
    cout<<"Enter the breadth of rectangle: ";
    cin>>br;
    cout<<"\nArea of Square = "<<area(ls)<<endl;
    cout<<"Area of Ractangle = "<<area(ls, lr)<<endl;
    return 0;
}