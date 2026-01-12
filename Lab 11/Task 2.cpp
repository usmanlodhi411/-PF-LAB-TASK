#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0, avg;
    
    cout << "Enter the number of data (1-100): ";
    cin >> n;

    while (n <= 0 || n > 100) {
        cout << "Error! Enter a number between 1-100: ";
        cin >> n;
    }

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;
    cout << "Average: " << avg << endl;
    return 0;
}

