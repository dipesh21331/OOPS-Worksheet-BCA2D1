#include <iostream>

using namespace std;

class Room {
private:
    float length;
    float breadth;

public:
    // Function to set length and breadth of the room
    void get() {
        cout << "Enter length of the room: ";
        cin >> length;
        cout << "Enter breadth of the room: ";
        cin >> breadth;
    }

    // Function to display the length and breadth of the room
    void display() {
        cout << "Length: " << length << " meters" << endl;
        cout << "Breadth: " << breadth << " meters" << endl;
    }

    // Function to calculate area of the room
    float area() {
        return length * breadth;
    }

    // Function to calculate perimeter of the room
    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    const int num_rooms = 5;
    Room rooms[num_rooms];

    // Input data for each room and display area and perimeter
    for (int i = 0; i < num_rooms; i++) {
        cout << "\nEnter data for Room " << i + 1 << ":" << endl;
        rooms[i].get();
        cout << "Area of Room " << i + 1 << ": " << rooms[i].area() << " square meters" << endl;
        cout << "Perimeter of Room " << i + 1 << ": " << rooms[i].perimeter() << " meters" << endl;
    }

    return 0;
}

