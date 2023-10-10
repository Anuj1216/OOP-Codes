#include <iostream>
using namespace std;
class Theory
{
    protected:
        int tmarks;
    public:
        Theory()
        {
            tmarks = 50;
        }
        void display()
        {
            cout<<"Theory Marks = "<<tmarks<<endl;
        }
};
class Practical
{
    protected:
        int pmarks;
    public:
        Practical()
        {
            pmarks = 50;
        }
        void display()
        {
            cout<<"Practical Marks = "<<pmarks<<endl;
        }
};
class Total : public Theory, public Practical{
    int total;
    public:
        void get_total()
        {
            total = pmarks + tmarks;
        }
        void display()
        {
            cout<<"Total = "<<total;
        }
};
main()
{
    Total t;
    t.Theory::display();
    t.Practical::display();
    t.get_total();
    t.display();
    return 0;
}