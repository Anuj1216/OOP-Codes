#include <iostream>
using namespace std;
main()
{
    int *marks;
    int n;
    cout<<"Enter the no. of data to add: ";
    cin>>n;
    marks = new int[n];
    cout<<"Enter the marks of the Students: \n";
    for(int i=0 ;i<n; i++)
    {
        cout<<"Student "<< i+1<<": ";
        cin>> *(marks + i);
    }
    cout<<"Entered Data are: \n";
    for(int i=0 ;i<n; i++)
    {
        cout<<"Student "<< i+1<<": "<<*(marks + i)<<endl;
    }
    return 0;
}