#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int a[10];
    ifstream file ("10Numbers.txt");
    ofstream even ("Even.txt");
    ofstream odd ("Odd.txt");
    for(int i = 0; i < 10; i++)
    {
        file>>a[i];
        if(a[i] % 2 == 0)
        {
            even<<a[i]<<endl;
        }
        else
        {
            odd<<a[i]<<endl;
        }
    }
    cout<<"Success!";
    return 0;
}