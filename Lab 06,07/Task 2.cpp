#include <iostream>
using namespace std;

int main() {
    float temperature;

    // Reading current temperature
    cout << "Enter current temperature (°C): ";
    cin >> temperature;

    // Check if temperature crosses safe limit
    if (temperature > 45) {
        cout << "ALERT! Temperature is above safe limit. Equipment may be damaged!" << endl;
    }

    return 0;
}
