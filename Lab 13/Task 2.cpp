#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    checkEvenOdd(4);  // Example input
    checkEvenOdd(7);  // Example input
    return 0;
}
