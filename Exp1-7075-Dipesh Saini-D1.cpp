#include <iostream>

using namespace std;

int main() {
    int number;
    int validCount = 0;

    while (true) {
        cout << "Enter the number: ";
        cin >> number;

        if (number % 8 == 0) {
            validCount++;
        } else {
            break; // Exit the loop if the number is not divisible by 8
        }
    }

    cout << "Total " << validCount << " numbers are valid numbers." << endl;

    return 0;
}

