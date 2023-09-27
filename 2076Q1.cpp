#include <iostream>
using namespace std;
class Account
{
    long accno;
    int balance;
    static int min_balance;
    public:
        void get_data()
        {
            cout<<"Enter the Account Number: ";
            cin>>accno;
            cout<<"Enter the Account Balance: ";
            cin>>balance;
        }
        static void get_data_static()
        {
            cout<<"Enter the Minimum Balance: ";
            cin>>min_balance;
        }
        void display_data()
        {
            cout<<"Account Number = "<<accno<<endl;
            cout<<"Account Balance = "<<balance<<endl;
        }
        static void display_data_static()
        {
            cout<<"Minimum Balance = "<<min_balance<<endl;
        }
};
int Account::min_balance;
main()
{
    Account A;
    A.get_data();
    Account::get_data_static();
    A.display_data();
    Account::display_data_static();
}