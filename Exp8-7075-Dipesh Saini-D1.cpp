#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    static int totalTransactions; // Static variable to keep track of total transactions

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Static method to get total transactions
    static int getTotalTransactions() {
        return totalTransactions;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        totalTransactions++; // Increment total transactions
    }

    // Method to withdraw money from the account
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            totalTransactions++; // Increment total transactions
            return true;
        } else {
            cout << "Insufficient balance!" << endl;
            return false;
        }
    }

    // Method to display account information
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Initializing static variable
int BankAccount::totalTransactions = 0;

int main() {
    string accNum;
    double initialBalance, amount;

    // Getting account details from the user
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Creating bank account object
    BankAccount acc(accNum, initialBalance);

    // Performing transactions
    cout << "Enter amount to deposit: ";
    cin >> amount;
    acc.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc.withdraw(amount);

    // Displaying account information
    acc.displayAccount();

    // Displaying total transactions
    cout << "Total Transactions: " << BankAccount::getTotalTransactions() << endl;

    return 0;
}

