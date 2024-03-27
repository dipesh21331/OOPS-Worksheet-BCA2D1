#include <iostream>

using namespace std;

class StringOperation {
private:
    string str;

public:
    // Constructor
    StringOperation(string s) : str(s) {}

    // Function to find the length of the string
    int findLength() const {
        int length = 0;
        for (char c : str) {
            length++;
        }
        return length;
    }

    // Function to find the reverse of the string
    string findReverse() const {
        string reversedStr;
        for (int i = str.length() - 1; i >= 0; i--) {
            reversedStr += str[i];
        }
        return reversedStr;
    }

    // Function to concatenate two strings
    string concatenate(const string& otherStr) const {
        return str + otherStr;
    }

    // Function to compare two strings
    bool compare(const string& otherStr) const {
        if (str.length() != otherStr.length()) {
            return false;
        }
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != otherStr[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string inputStr, anotherStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);
    cout << "Enter another string: ";
    getline(cin, anotherStr);

    StringOperation strOp(inputStr);

    cout << "Length of the string: " << strOp.findLength() << endl;
    cout << "Reverse of the string: " << strOp.findReverse() << endl;
    cout << "Concatenation of the two strings: " << strOp.concatenate(anotherStr) << endl;

    // Comparison
    if (strOp.compare(anotherStr)) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }

    return 0;
}

