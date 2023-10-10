#include <iostream>
using namespace std;
main()
{
    int a, b;
    cout<<"Enter the values: ";
    cin>>a>>b;
    try{
        if(b == 0)
        {
            throw "Divide by Zero not allowed!";
        }
        if(a < 0 || b < 0)
        {
            throw "Negetive numbers not allowed!";
        }
        cout<<"Result = "<<a/b<<endl;
    }
    catch(const char* error)
    {
        cout<<"Error: "<<error<<endl;
    }
    return 0;
}