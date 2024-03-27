#include <iostream>
#include <vector>

using namespace std;

class Number {
private:
    int decimal;

public:
    // Constructor to initialize decimal number
    Number(int num) {
        decimal = num;
    }

    // Function to convert decimal to binary
    vector<int> toBinary() {
        vector<int> binary;
        int temp = decimal;
        
        // Handle special case when number is 0
        if (temp == 0) {
            binary.push_back(0);
            return binary;
        }
        
        // Convert decimal to binary
        while (temp > 0) {
            binary.push_back(temp % 2);
            temp /= 2;
        }
        
        // Reverse the binary representation manually
        vector<int> reversedBinary(binary.rbegin(), binary.rend());
        
        return reversedBinary;
    }

    // Function to display binary representation
    void displayBinary() {
        vector<int> binary = toBinary();
        cout << "Binary representation of " << decimal << " is: ";
        for (int bit : binary) {
            cout << bit;
        }
        cout << endl;
    }
};

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    Number number(num);

    number.displayBinary();

    return 0;
}

