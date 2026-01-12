#include <iostream>
using namespace std;

int main() {
    int units, allowedUnits;
    double bill = 0;
    const double maintenanceFee = 39;

    // Input
    cout << "Enter units consumed: ";
    cin >> units;

    cout << "Enter allowed monthly usage limit: ";
    cin >> allowedUnits;

    // Billing logic
    if (units <= allowedUnits) {
        bill = units * 5;           // Normal rate
    } else {
        bill = units * 10;          // High usage rate
        bill = bill + (bill * 0.29); // Adding 29% sales tax
    }

    // Adding maintenance fee
    bill += maintenanceFee;

    // Output final bill
    cout << "----------------------------------\n";
    cout << "Total Electricity Bill: $" << bill << endl;
    cout << "----------------------------------\n";

    return 0;
}
