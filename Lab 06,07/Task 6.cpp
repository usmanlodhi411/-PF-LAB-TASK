#include <iostream>
using namespace std;

int main() {
    int level, experience;
    char remote;
    double basicSalary = 0, expBonus = 0, remoteBonus = 0;
    double grossSalary = 0, tax = 0, finalSalary = 0;

    // --- Input Section ---
    cout << "Enter Job Level (1-4): ";
    cin >> level;

    cout << "Enter Years of Experience: ";
    cin >> experience;

    cout << "Working in Remote Area? (Y/N): ";
    cin >> remote;


    // --- Basic Salary Based on Level ---
    switch(level) {
        case 1: basicSalary = 120000; break;
        case 2: basicSalary = 85000; break;
        case 3: basicSalary = 60000; break;
        case 4: basicSalary = 40000; break;
        default:
            cout << "Invalid Job Level!";
            return 0;
    }


    // --- Experience Bonus Calculation ---
    if (experience >= 15)
        expBonus = basicSalary * 0.25;
    else if (experience >= 10)
        expBonus = basicSalary * 0.15;
    else if (experience >= 5)
        expBonus = basicSalary * 0.10;
    else
        expBonus = 0;


    // --- Remote Area Bonus ---
    if (remote == 'Y' || remote == 'y')
        remoteBonus = basicSalary * 0.08;
    else
        remoteBonus = 0;


    // --- Gross Salary ---
    grossSalary = basicSalary + expBonus + remoteBonus;


    // --- Tax Calculation ---
    if (grossSalary >= 150000)
        tax = grossSalary * 0.30;
    else if (grossSalary >= 100000)
        tax = grossSalary * 0.20;
    else if (grossSalary >= 60000)
        tax = grossSalary * 0.10;
    else
        tax = 0;


    // --- Final Salary ---
    finalSalary = grossSalary - tax;


    // --- Output Section ---
    cout << "\n------ Salary Breakdown ------\n";
    cout << "Basic Salary:        " << basicSalary << endl;
    cout << "Experience Bonus:    " << expBonus << endl;
    cout << "Remote Bonus:        " << remoteBonus << endl;
    cout << "Gross Salary:        " << grossSalary << endl;
    cout << "Tax Deducted:        " << tax << endl;
    cout << "Final Salary:        " << finalSalary << endl;


    return 0;
}
