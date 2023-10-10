#include <iostream>
using namespace std;
class Gram
{
    int g;
    public:
        Gram(int g1)
        {
            g = g1;
        }
        int getter()
        {
            return g;
        }
        void display()
        {
            cout<<"Gram = "<<g<<endl;
        }
};
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
        Kilogram(Gram g1)
        {
            int g2;
            g2 = g1.getter();
            kg = g2 / 1000;
            g = g2 % 1000;
        }
        void display()
        {
            cout<<kg<<" KG "<<g<<" G "<<endl;
        }
};
main()
{
    Gram G(1200);
    Kilogram K;
    G.display();
    K = G;
    K.display();
    return 0;
}