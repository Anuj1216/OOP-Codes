#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream fin;
    char ch;
    fin.open("abc.txt");
    while(!fin.eof()){
        fin.get(ch);
        cout.put(ch);
    }
    fin.close();
    return 0;
}