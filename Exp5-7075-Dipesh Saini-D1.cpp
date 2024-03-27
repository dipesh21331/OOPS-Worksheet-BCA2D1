#include <iostream>

using namespace std;

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass(int d) {
        data = d;
    }

    // Function to set data
    void setData(int d);

    // Function to get data
    int getData();

    // Function to display data
    void displayData();
};

// Define member functions outside the class using ClassName::
void MyClass::setData(int d) {
    data = d;
}

int MyClass::getData() {
    return data;
}

void MyClass::displayData() {
    cout << "Data: " << data << endl;
}

int main() {
    int initialData;
    
    // Accept input from user
    cout << "Enter initial data: ";
    cin >> initialData;

    // Create an object of MyClass
    MyClass obj(initialData);

    // Use member functions
    obj.displayData(); // Display initial data

    int newData;
    // Accept new data from user
    cout << "Enter new data: ";
    cin >> newData;

    // Set new data using setData
    obj.setData(newData);

    // Display updated data using getData
    cout << "Updated Data: " << obj.getData() << endl;

    return 0;
}

