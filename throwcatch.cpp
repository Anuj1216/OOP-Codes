//use a try block to throw it and catch block to handle it
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            cout<<"Result = "<<(float)a / b;
        }
    }
    catch(int b)
    {
        cout<<"Cannot Divide by Zero"<<endl;
        cout<<"Exception: b = "<<b;
    }
    return 0;  
}