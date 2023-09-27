#include <iostream>
using namespace std;
int main()
{
	int *marks;
	marks = new int[3];
	cout<<"Enter the marks of 3 students: \n";
	for(int i = 0; i < 3; i++) 
	{
        cout << "Student " << i+1 << ": ";
        cin >> *(marks + i); 
    }

    cout << "\nEntered marks are:\n";
    for(int i = 0; i < 3; i++) 
	{
        cout << "Student " << i+1 << ": " << *(marks + i) << endl; 
    }

    delete[] marks; 

    return 0;
}
