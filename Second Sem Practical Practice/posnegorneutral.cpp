#include <iostream>
using namespace std;
main()
{
    int a;
    cout<<"Enter the value to check: ";
    cin>>a;
    if(a < 0)
    {
        cout<<"Negetive Number!";
    }
    else if(a > 0)
    {
        cout<<"Positive Number!";
    }
    else{
        cout<<"Neutral Number!";
    }
    return 0;
}