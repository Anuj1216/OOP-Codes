#include <iostream>
using namespace std;
class Circle
{
    int r;
    public:
        void get_data()
        {
        cout<<"Enter the radius of circle: ";
        cin>>r;
        }
        friend void area(Circle);
};
void area (Circle c)
{
    float a = 3.14 * c.r * c.r;
    cout<<"Area of circle = "<<a;
}
main()
{
    Circle c;
    c.get_data();
    area(c);
    return 0;
}