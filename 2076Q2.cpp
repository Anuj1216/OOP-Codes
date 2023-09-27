//Write programs to add two object of distance class with data members feet and inch by using by using member function and friend function.
#include<iostream>  
using namespace std;
class Distance
{
    public:
    	int feet, inch;
        void get_data()
        {
            cout<<"Enter the Feet: ";
            cin>>feet;
            cout<<"Enter the Inch: ";
            cin >>inch;
        }
        void display_data()
        {
            cout<<feet<<" Feet "<<inch<<" Inch "<<endl;
        }
        friend void sum(Distance);
};
Distance sum(Distance d1, Distance d2)
{
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;
    if(temp.inch > 12)
    {
        temp.feet = temp.feet + temp.inch/12;
        temp.inch = temp.inch % 12;
    }
    return temp;
}
main()
{
    Distance d1,d2,d3;
    d1.get_data();
    d1.display_data();
    d2.get_data();
    d2.display_data();
    sum(d1,d2);
    cout << "Sum of two distances is :";
    d3.display_data();
}
