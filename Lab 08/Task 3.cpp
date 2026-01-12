#include <iostream>
#include <cmath> // For M_PI
using namespace std;

int main() {
    int choice;
    double area;

    cout << "===== Area Calculator =====\n";
    cout << "Select a shape:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius; // Area = pr^2
            cout << "Area of Circle = " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width; // Area = length × width
            cout << "Area of Rectangle = " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height; // Area = 1/2 × base × height
            cout << "Area of Triangle = " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
