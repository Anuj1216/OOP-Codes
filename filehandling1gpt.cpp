#include <iostream>
#include <fstream>
using namespace std;

class Employee {
    int id;
    char name[20];
    float salary;

public:
    void get_data() {
        cout << "Enter Employee's ID, Name & Salary: ";
        cin >> id >> name >> salary;
    }
};

int main() {
    Employee e;
    ofstream file("Emp.txt", ios::app);  // Open file in append mode

    if (!file) {
        cerr << "Error Opening File!" << endl;
        return 1;
    }

    char choice;
    do {
        e.get_data();
        file.write((char*)&e, sizeof(e));

        cout << "One Row Created!" << endl;
        cout << "Do you want to enter data for another employee? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    file.close();
    return 0;
}

