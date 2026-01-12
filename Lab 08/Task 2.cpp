
#include <iostream>
using namespace std;

int main() {
    int choice;
    double usd, convertedAmount;

    // Exchange Rates (example rates)
    double pkrRate = 280.50;   // 1 USD = 280.50 PKR
    double poundRate = 0.79;   // 1 USD = 0.79 Pound
    double euroRate = 0.92;    // 1 USD = 0.92 Euro

    cout << "===== Currency Converter =====\n";
    cout << "Convert USD to:\n";
    cout << "1. PKR (Pakistani Rupees)\n";
    cout << "2. Pound (GBP)\n";
    cout << "3. Euro (EUR)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch(choice) {
        case 1:
            convertedAmount = usd * pkrRate;
            cout << "\n" << usd << " USD = " << convertedAmount << " PKR\n";
            break;

        case 2:
            convertedAmount = usd * poundRate;
            cout << "\n" << usd << " USD = " << convertedAmount << " Pounds\n";
            break;

        case 3:
            convertedAmount = usd * euroRate;
            cout << "\n" << usd << " USD = " << convertedAmount << " Euros\n";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
