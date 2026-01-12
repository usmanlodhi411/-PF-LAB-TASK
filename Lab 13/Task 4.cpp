#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? a / b : 0; }

int main() {
    int choice, num1, num2;
    do {
        cout << "Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            switch (choice) {
                case 1: cout << "Result: " << add(num1, num2) << endl; break;
                case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
                case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
                case 4: cout << "Result: " << divide(num1, num2) << endl; break;
            }
        }
    } while (choice != 5);
    return 0;
}
