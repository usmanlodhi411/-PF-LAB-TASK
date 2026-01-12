#include <iostream>
using namespace std;

// Function to calculate bonus amount
float calculateBonus(float salary, int rating) {
    float bonus = 0.0;
    if (rating == 5) 
        bonus = salary * 0.20;
    else if (rating == 4) 
        bonus = salary * 0.10;
    else if (rating == 3) 
        bonus = salary * 0.05;
    return bonus;
}

// Function to display bonus and final salary
void displayBonus(float salary, float bonus) {
    float finalSalary = salary + bonus;
    cout << "Bonus: " << bonus << endl;
    cout << "Final Salary: " << finalSalary << endl;
}

int main() {
    float salary;
    int rating;
    
    // Taking input from user
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter performance rating (1-5): ";
    cin >> rating;
    
    // Calculating and displaying bonus
    float bonus = calculateBonus(salary, rating);
    displayBonus(salary, bonus);
    
    return 0;
}
