#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default Constructor
    Circle() {
        radius = 0.0;
    }

    // Constructor with radius argument
    Circle(double r) {
        setRadius(r);
    }

    // Mutator function for radius
    void setRadius(double r) {
        if (r >= 0) {
            radius = r;
        }
    }

    // Accessor function for radius
    double getRadius() {
        return radius;
    }

    // Calculate and return the area of the circle
    double getArea() {
        return pi * radius * radius;
    }

    // Calculate and return the diameter of the circle
    double getDiameter() {
        return radius * 2;
    }

    // Calculate and return the circumference of the circle
    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    double userRadius;

    // Prompt the user to enter the circle's radius
    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    // Create a Circle object with the user-provided radius
    Circle myCircle(userRadius);

    // Display the circle's properties
    cout << "Circle Properties:\n";
    cout << "Radius: " << myCircle.getRadius() << endl;
    cout << "Area: " << myCircle.getArea() << endl;
    cout << "Diameter: " << myCircle.getDiameter() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
