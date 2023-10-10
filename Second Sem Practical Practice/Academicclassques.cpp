#include <iostream>
using namespace std;
class Academic
{
    protected:
        int marks;
    public:
        void get_data()
        {
            cout<<"Enter marks: ";
            cin>>marks;
        }
};
class Extra
{
    protected:
        int punctuality, discipline;
    public:
        void get_data()
        {
            cout<<"Enter punctuality and discipline: ";
            cin>>punctuality>>discipline;
        }
};
class Result : public Academic, public Extra
{
    int total;
    public:
        void get_total()
        {
            total = marks + punctuality + discipline;
        }
        void display_total()
        {
            cout<<"Total Marks = "<<total;
        }
};
main()
{
    Result r;
    r.Academic::get_data();
    r.Extra::get_data();
    r.get_total();
    r.display_total();
    return 0;
}