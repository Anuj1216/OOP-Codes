#include <iostream>
#include <fstream>
using namespace std;
main()
{
    ofstream out("apple.txt");
    out<<"I am Alan";
    cout<<"Success!";
    out.close();
    return 0;
}