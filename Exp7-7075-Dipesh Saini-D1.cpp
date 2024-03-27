#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    // Declaring the friend function for operator overloading
    friend MyClass operator+(const MyClass& obj1, const MyClass& obj2);

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Defining the overloaded addition operator as a friend function
MyClass operator+(const MyClass& obj1, const MyClass& obj2) {
    // Accessing private members of MyClass within the friend function
    int sum = obj1.value + obj2.value;
    // Creating and returning a new MyClass object with the result
    return MyClass(sum);
}

int main() {
    int val1, val2;

    // Prompting the user to enter values for two objects
    cout << "Enter value for first object: ";
    cin >> val1;
    cout << "Enter value for second object: ";
    cin >> val2;

    // Creating two MyClass objects with the user-entered values
    MyClass obj1(val1);
    MyClass obj2(val2);

    // Adding the two objects using overloaded + operator
    MyClass result = obj1 + obj2;

    // Displaying the result
    cout << "Result after addition:" << endl;
    result.display();

    return 0;
}

