#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int a[10];
    // ofstream file("Numbers.txt");
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Enter data: ";
    //     cin>>a[i];
    //     file<<a[i]<<endl;
    // }
    // file.close();
    // return 0;
    ifstream file ("Numbers.txt");
    ofstream even("Even.txt");
    ofstream odd ("Odd.txt");
    for(int i = 0; i < 10; i++)
    {
        file>>a[i];
        if(a[i] % 2 == 0)
        {
            even<<a[i]<<endl;
        }
        else{
            odd<<a[i]<<endl;
        }
    }
    file.close();
    return 0;
}