#include <iostream>
using namespace std;
class Polygon
{
    protected:
    	int length, width;
    public:
    void get_data()
    {
        cout<<"Enter length and width: ";
        cin>>length>>width;
    }
    void display_data()
    {
        cout<<"Length = "<<length<<endl;
        cout<<"Width = "<<width<<endl;
    }
};
class Triangle : public Polygon
{
    float area;
    public:
    void get_area_triangle()
    {
        area = 0.5 * length * width;
    }
    void display_area_triangle()
    {
        cout<<"Area = "<<area<<endl;
    }
};
class Rectangle : public Polygon
{
    float area;
    public:
    void get_area_rectangle()
    {
        area = length * width;
    }
    void display_area_rectangle()
    {
        cout<<"Area = "<<area<<endl;
    }
};
main()
{
    Rectangle r;
    cout<<"For Rectangle: "<<endl;
    r.get_data();
    r.display_data();
    r.get_area_rectangle();
//    cout<<"Area of rectangle is: "<<endl;
    r.display_area_rectangle();
    Triangle t;
    cout<<"For Triangle: "<<endl;
    t.get_data();
    t.display_data();
    t.get_area_triangle();
//    cout<<"Area of triangle is: "<<endl;
    t.display_area_triangle();
    return 0;
}
