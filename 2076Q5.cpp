#include <iostream>
using namespace std;
main()
{
    int *p, n;
    cout<<"Enter the number of data: ";
    cin>>n;
    p = new int[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter Value  "<<i+1<<": ";
        cin>>(*(p+i));
    }
    cout<<"Values are:"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}