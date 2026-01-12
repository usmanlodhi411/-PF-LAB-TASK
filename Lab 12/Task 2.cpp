#include <iostream>
using namespace std;

// Function to calculate percentage
float calculatePercentage(float marks[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return (total / (n * 100)) * 100;
}

// Function to display percentage and grade
void displayResult(float percentage) {
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;
}

int main() {
    float marks[5];
    
    // Taking input for 5 subjects
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    
    // Calculating and displaying result
    float percentage = calculatePercentage(marks, 5);
    displayResult(percentage);
    
    return 0;
}
