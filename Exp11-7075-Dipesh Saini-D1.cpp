#include <iostream>

using namespace std;

// Base class Employee
class Employee {
public:
    // Virtual function for calculating salary
    virtual double calculateSalary() const = 0;
};

// Derived class for full-time employees
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    // Constructor
    FullTimeEmployee(double salary) : monthlySalary(salary) {}

    // Override calculateSalary() for full-time employees
    virtual double calculateSalary() const override {
        return monthlySalary;
    }
};

// Derived class for part-time employees
class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    // Override calculateSalary() for part-time employees
    virtual double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};

// Derived class for managers
class Manager : public Employee {
private:
    double monthlySalary;
    double bonus;

public:
    // Constructor
    Manager(double salary, double bonusAmount) : monthlySalary(salary), bonus(bonusAmount) {}

    // Override calculateSalary() for managers
    virtual double calculateSalary() const override {
        return monthlySalary + bonus;
    }
};

int main() {
    // Accept user input for different types of employees
    double salary, rate, bonus;
    int hours;

    cout << "Enter monthly salary for full-time employee: ";
    cin >> salary;
    FullTimeEmployee fullTimeEmployee(salary);

    cout << "Enter hourly rate for part-time employee: ";
    cin >> rate;
    cout << "Enter hours worked for part-time employee: ";
    cin >> hours;
    PartTimeEmployee partTimeEmployee(rate, hours);

    cout << "Enter monthly salary for manager: ";
    cin >> salary;
    cout << "Enter bonus amount for manager: ";
    cin >> bonus;
    Manager manager(salary, bonus);

    // Calculate and display salaries
    cout << "Salary for full-time employee: " << fullTimeEmployee.calculateSalary() << endl;
    cout << "Salary for part-time employee: " << partTimeEmployee.calculateSalary() << endl;
    cout << "Salary for manager: " << manager.calculateSalary() << endl;

    return 0;
}

