//WAP to calculate the volume of rectangle and square using the concept of function overloading. 
//Also try to highlight the concept of cope resolution and friend function.
#include<iostream>
using namespace std;
class Volume
{
    int l,b,h,s;
    float volume;
    public:
      void get_rectangle()
      {
        cout<<"Enter length, breadth and height of Rectangle: ";
        cin>>l>>b>>h;
      }  
      void get_square()
      {
        cout<<"Enter the side of Square: ";
        cin>>s;
      }
      void find_rectangle();
      friend float find_square(Volume v);
};
void Volume::find_rectangle()
{
    volume = l * b * h;
    cout<<"Volume of Rectangle = "<<volume<<endl;
}
float find_square(Volume v)
{
    float volume = v.s * v.s * v.s;
    return volume;
}
main()
{
    Volume v;
    v.get_rectangle();
    v.find_rectangle();
    v.get_square();
    cout<<"Volume of Square = "<<find_square(v);
    return 0;
}