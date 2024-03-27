#include <iostream>
#include <cmath>

using namespace std;

// Base class for geometric shapes
class Shape {
public:
    // Function to calculate area
    double area() const { return 0; }

    // Function to calculate perimeter
    double perimeter() const { return 0; }
};

// Derived class for circles
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Function to calculate area for circles
    double area() const {
        return M_PI * radius * radius;
    }

    // Function to calculate perimeter for circles
    double perimeter() const {
        return 2 * M_PI * radius;
    }
};

// Derived class for rectangles
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate area for rectangles
    double area() const {
        return length * width;
    }

    // Function to calculate perimeter for rectangles
    double perimeter() const {
        return 2 * (length + width);
    }
};

// Derived class for triangles
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to calculate area for triangles
    double area() const {
        double s = (side1 + side2 + side3) / 2; // Semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Heron's formula
    }

    // Function to calculate perimeter for triangles
    double perimeter() const {
        return side1 + side2 + side3;
    }
};

int main() {
    double radius, length, width, side1, side2, side3;

    // Accepting input from the user for creating objects of different geometric shapes
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    Triangle triangle(side1, side2, side3);

    // Calculating and displaying area and perimeter for each shape
    cout << "Circle:" << endl;
    cout << "Area: " << circle.area() << endl;
    cout << "Perimeter: " << circle.perimeter() << endl << endl;

    cout << "Rectangle:" << endl;
    cout << "Area: " << rectangle.area() << endl;
    cout << "Perimeter: " << rectangle.perimeter() << endl << endl;

    cout << "Triangle:" << endl;
    cout << "Area: " << triangle.area() << endl;
    cout << "Perimeter: " << triangle.perimeter() << endl << endl;

    return 0;
}

