#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate;
    int time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> rate;

    cout << "Enter the time in years: ";
    cin >> time;

    double compoundAmount = principal * pow(1 + rate, time); // Formula for compound amount
    double compoundInterest = compoundAmount - principal;   // Calculate compound interest

    cout << "Compound Interest: " << static_cast<float>(compoundInterest) << endl; // Typecasting to float
    cout << "Compound Amount: " << static_cast<float>(compoundAmount) << endl;     // Typecasting to float

    return 0;
}

