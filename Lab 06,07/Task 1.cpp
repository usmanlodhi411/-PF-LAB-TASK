#include <iostream>
using namespace std;

int main() {
    double salary, increase = 0, newSalary;
    int years;

    // Input
    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    // Salary Increase Logic
    if (years < 2) {
        increase = 0; // No increase
    }
    else if (years >= 2 && years < 5) {
        increase = salary * 0.05; // 5% increase
    }
    else if (years >= 5 && years < 10) {
        increase = salary * 0.10; // 10% increase
    }
    else {
        increase = salary * 0.20; // 20% increase
    }

    newSalary = salary + increase;

    // Output
    cout << "\n---------------------------\n";
    cout << "Salary Increase: $" << increase << endl;
    cout << "New Salary: $" << newSalary << endl;
    cout << "---------------------------\n";

    return 0;
}
