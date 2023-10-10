#include <iostream>
#include <fstream>
using namespace std;
main()
{
    ofstream file("apple.txt");
    file<<"I am Alan";
    file.close();
    return 0;
}