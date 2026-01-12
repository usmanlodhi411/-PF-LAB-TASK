#include <iostream>
using namespace std;

int main() {

    double salary, bonus = 0, newSalary;
    int years;

    // Input
    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    // BONUS DECISION
    if (years < 2) {
        bonus = 0;                 // No bonus
        cout << "\nNo bonus available.\n";
    }
    else if (years >= 2 && years < 5) {
        bonus = salary * 0.05;     // 5% bonus
        cout << "\nBonus Level: 5%\n";
    }
    else if (years >= 5 && years < 10) {
        bonus = salary * 0.10;     // 10% bonus
        cout << "\nBonus Level: 10%\n";
    }
    else {
        bonus = salary * 0.20;     // 20% bonus
        cout << "\nBonus Level: 20%\n";
    }

    // APPLY BONUS
    newSalary = salary + bonus;

    // OUTPUT
    cout << "Bonus Amount: " << bonus << endl;
    cout << "Updated Salary: " << newSalary << endl;

    return 0;
}
