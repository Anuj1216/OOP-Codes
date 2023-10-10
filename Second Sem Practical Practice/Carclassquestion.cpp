#include <iostream>
using namespace std;
class Car
{
    int model, year, mileage;
    public:
        Car()
        {
            model = 1123;
            year = 2016;
            mileage = 60;
        }
        Car(int model, int year, int mileage)
        {
            this -> model = model;
            this -> year = year;
            this -> mileage = mileage;
        }
        Car(Car &c)
        {
            model = c.model;
            year = c.year;
            mileage = c.mileage;
        }
        void display()
        {
            cout<<"Model = "<<model<<endl;
            cout<<"Manufactured Year = "<<year<<endl;
            cout<<"Mileage = "<<mileage<<endl;
        }
        ~Car(){}
};
main()
{
    Car c1, c2(2123, 2017, 55), c3;
    c3 = c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}