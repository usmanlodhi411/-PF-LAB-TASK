#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    double price;
};

// Function to display the menu
void displayMenu(const Item menu[], int size) {
    cout << "\n--- Restaurant Menu ---\n";
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". " << menu[i].name << " - $" << menu[i].price << endl;
    }
}

// Function to calculate the total cost of an item (price × quantity)
double calculateItemTotal(double price, int quantity) {
    return price * quantity;
}

// Function to calculate the final bill with service charge (tax)
double calculateFinalBill(double total, double serviceChargePercent) {
    double serviceCharge = total * (serviceChargePercent / 100);
    return total + serviceCharge;
}

int main() {
    // Define menu items and their prices
    Item menu[] = {
        {"Burger", 5.99},
        {"Pizza", 8.49},
        {"Pasta", 7.29},
        {"Salad", 4.50},
        {"Drink", 1.99}
    };
    int menuSize = 5;
    double serviceChargePercent = 10.0; // 10% service charge
    double totalBill = 0.0;
    int choice, quantity;
    char continueOrder;

    do {
        // Display menu
        displayMenu(menu, menuSize);

        // User selects an item
        cout << "\nEnter the number of the item you'd like to order: ";
        cin >> choice;

        if (choice < 1 || choice > menuSize) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        // Ask for quantity
        cout << "Enter quantity: ";
        cin >> quantity;

        // Calculate item total and add to bill
        double itemTotal = calculateItemTotal(menu[choice - 1].price, quantity);
        totalBill += itemTotal;
        cout << "Added " << menu[choice - 1].name << " x" << quantity << " = $" << itemTotal << endl;

        // Ask to order more
        cout << "Do you want to order another item? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    // Calculate and display final bill with service charge
    double finalBill = calculateFinalBill(totalBill, serviceChargePercent);
    cout << "\nTotal amount before service charge: $" << totalBill << endl;
    cout << "Final bill (including " << serviceChargePercent << "% service charge): $" << finalBill << endl;

    return 0;
}
