#include <iostream>
using namespace std;

int main() {
    int category, item, quantity;
    double price = 0, total = 0, discount = 0, finalAmount = 0;

    // --- Display Categories ---
    cout << "===== Shopping System =====\n";
    cout << "Select a Category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter choice: ";
    cin >> category;

    // --- Category Selection ---
    switch(category) {
        case 1:
            cout << "\nElectronics Items:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Select an item: ";
            cin >> item;

            if (item == 1) price = 1000;
            else if (item == 2) price = 700;
            else if (item == 3) price = 150;
            else {
                cout << "Invalid Item!";
                return 0;
            }
            break;

        case 2:
            cout << "\nClothing Items:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Select an item: ";
            cin >> item;

            if (item == 1) price = 120;
            else if (item == 2) price = 40;
            else if (item == 3) price = 60;
            else {
                cout << "Invalid Item!";
                return 0;
            }
            break;

        case 3:
            cout << "\nGrocery Items:\n";
            cout << "1. Milk ($2)\n";
            cout << "2. Bread ($3)\n";
            cout << "3. Eggs ($5)\n";
            cout << "Select an item: ";
            cin >> item;

            if (item == 1) price = 2;
            else if (item == 2) price = 3;
            else if (item == 3) price = 5;
            else {
                cout << "Invalid Item!";
                return 0;
            }
            break;

        default:
            cout << "Invalid Category!";
            return 0;
    }

    // --- Quantity Input ---
    cout << "Enter quantity: ";
    cin >> quantity;

    // --- Total Price Calculation ---
    total = price * quantity;

    // --- Discount Application ---
    if (total > 500)
        discount = total * 0.20;   // 20%
    else if (total >= 100)
        discount = total * 0.10;   // 10%
    else
        discount = 0;

    // --- Final Amount ---
    finalAmount = total - discount;

    // --- Invoice Output ---
    cout << "\n===== Invoice =====\n";
    cout << "Price per item: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price: $" << total << endl;
    cout << "Discount Applied: $" << discount << endl;
    cout << "Final Amount to Pay: $" << finalAmount << endl;

    return 0;
}
