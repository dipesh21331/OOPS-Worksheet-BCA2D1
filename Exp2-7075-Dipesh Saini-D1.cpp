#include <iostream>

using namespace std;

int sumOfSeries(int n) {
    int sum = 0;
    int term_sum = 0;
    for (int i = 1; i <= n; i++) {
        term_sum += i; // Calculating the sum of first i natural numbers
        sum += term_sum; // Adding the term_sum to the overall sum
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        int result = sumOfSeries(n);
        cout << "Sum of series for n = " << n << " is: " << result << endl;
    }

    return 0;
}

