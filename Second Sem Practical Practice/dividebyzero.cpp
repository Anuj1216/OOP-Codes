#include <iostream>
using namespace std;
main()
{
    int a, b;
    cout << "Enter two numbers: "; 
    cin >>a>>b ;
    try
    {
        if(b == 0)
        {
            throw b;
        }
        else
        {
            cout<<"Result = "<<a / b<<endl;
        }
    }
    catch(int b)
    {
        cout<<"Cannot Divide by Zero!";
        cout<<"Exception: b = "<<b<<endl;
    }
    return 0;
}