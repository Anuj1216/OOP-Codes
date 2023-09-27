//   TRY Block throwing excepion
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the values of a and b:\n";
	cin>>a>>b;
	try
	{
		if(b==0)
        {
		throw b;
        }
		else 
        {
		cout<<"Result ="<<(float)a/b;
        }
	}
	catch(int i){
		cout<<"Cannot divide by zero!"<<endl;
        cout<<"Exception: "<<i;
	}
	cout<<"\nEND";
	getch();
	return 0;
}