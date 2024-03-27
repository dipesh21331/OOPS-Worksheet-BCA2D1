#include <iostream>

using namespace std;

// Function to find maximum among 3 numbers using pointers
int maximum(int *a, int *b, int *c) {
    int max = *a; // Assume the first number is the maximum
    
    if (*b > max) {
        max = *b;
    }
    if (*c > max) {
        max = *c;
    }
    
    return max;
}

int main() {
    int num1, num2, num3;

    // Accepting input from the user
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Finding maximum using the maximum function
    int max = maximum(&num1, &num2, &num3);

    // Displaying the maximum number
    cout << "Maximum among the three numbers is: " << max << endl;

    return 0;
}

