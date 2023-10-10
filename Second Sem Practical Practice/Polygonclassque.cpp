#include <iostream>
using namespace std;
class Polygon
{
    protected:
        int length, width;
        float area;
    public:
        void get_data()
        {
            cout<<"Enter the length and breadth: ";
            cin>>length>>width;
        }
        void display()
        {
            cout<<"Area = "<<area<<endl;
        }
};
class Triangle : public Polygon{
    public:
        void get_area()
        {
            area = 0.5 * length * width;
        }
};
class Rectangle : public Polygon{
    public:
        void get_area()
        {
            area = length * width;
        }
};
main()
{
    Triangle t;
    t.get_data();
    t.get_area();
    t.display();
    Rectangle r;
    r.get_data();
    r.get_area();
    r.display();
    return 0;
}