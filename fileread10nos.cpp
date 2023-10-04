#include<iostream>
#include <fstream>
using namespace std;
main()
{
    int a[10];
    ifstream file ("10Numbers.txt");
    for (int i = 0; i < 10; i++)
    {
        file>>a[i];
        cout<<a[i]<<endl;
    }
    return 0;
}