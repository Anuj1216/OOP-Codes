//type conservion in routiine ko euta eg
#include <iostream>
using namespace std;
class Gram
{
    int gram;
    public:
        Gram()
        {
            gram = 0;
        }
        Gram(int g)
        {
            gram = g;
        }
        void display()
        {
            cout<<"Gram = "<<gram;
        }
};
class Kilogram
{
    int kg;
    public:
        Kilogram(int kg1)
        {
            kg = kg1;
        }
        operator Gram()
        {
            Gram g;
            int r = kg * 1000;
            return Gram(r);
        }
};
main()
{
    Gram G;
    Kilogram KG(4);
    G = KG;
    G.display();
    return 0;
}