#include <iostream>
using namespace std;
class Kilogram
{
    int kg, g;
    public:
        Kilogram()
        {
            kg = 0;
            g = 0;
        }
        Kilogram(int kg1, int g1)
        {
            kg = kg1;
            g = g1;
        }
        void display()
        {
            cout<<kg<<" KG "<<g<<" G "<<endl;
        }
};
class Gram
{
    int g;
    public:
        Gram(int g1)
        {
            g = g1;
        }
        operator Kilogram()
        {
            int kg2 = g/1000;
            int g2 = g % 1000;
            return Kilogram(kg2, g2);
        }
        void display()
        {
            cout<<"Gram = "<<g<<endl;
        }
};
main()
{
    Gram g(1200);
    g.display();
    Kilogram k;
    k = g;
    k.Kilogram::display();
    return 0;
}