#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T calculateSimpleInterest(T principal, T rate, T time) {
    return (principal * rate * time) / 100;
}

template <typename T>
T calculateCompoundInterest(T principal, T rate, T time) {
    return principal * pow((1 + rate/100), time) - principal;
}

int main() {
    double principal;
    double rate;
    double time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double simpleInterest = calculateSimpleInterest(principal, rate, time);
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}
