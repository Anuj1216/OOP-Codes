#include <iostream>
using namespace std;
class Weight
{
    int kg, g;
    public:
        Weight(int kg, int g)
        {
            this->kg=kg;;
            this->g=g;
        }
        Weight operator + (Weight w)
        {
            int total_kg = kg + w.kg;
            int total_g = g + w.g;
            if(total_g > 1000)
            {
                total_kg = total_kg + total_g/1000;
                total_g = total_g%1000;
            }
            return Weight(total_kg, total_g);
        }
        void display()
        {
            cout<<"KG = "<<kg<<endl;
            cout<<"G = "<<g<<endl;
        }
};
main()
{
    Weight w1(4, 700),w2(5, 900);
    w1.display();
    w2.display();
    Weight w3 = w1 + w2;
    w3.display();
    return 0;
}