#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    char str[80];
    fin.open("abc.txt");
    fin.getline(str, 79);
    cout<<"\nFrom File: \n"<<str;
    return 0;
}