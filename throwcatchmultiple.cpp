#include <iostream>
using namespace std;

int main() {
    try {
        // Attempt to perform some operations that may throw exceptions
        int a, b;

        cout << "Enter the values of a and b: ";
        cin >>a>>b;

        if (b == 0) 
        {
            throw "Division by zero is not allowed.";
        }

        if (a < 0 || b < 0) 
        {
            throw "Negative numbers are not allowed.";
        }

        int result = a / b;
        cout << "Result of division: " << result << endl;
    }
    catch (const char* error) 
    {
        cout << "Error: " << error << endl;
    }
    return 0;
}
