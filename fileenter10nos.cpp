#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int a[10];
    ofstream file("10Numbers.txt");
    cout<<"Enter any ten numbers: "<<endl;
    for(int i = 0; i < 10; i++)
    {
        cin>>a[i];
        file<<a[i]<<endl;
    }
    cout<<"Success!"<<endl;
    return 0;
}