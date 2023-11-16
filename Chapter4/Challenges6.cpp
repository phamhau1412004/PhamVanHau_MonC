#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int choice;
    
    while (true) {
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            break;
        } else if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            continue;
        }

        if (choice == 1) {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;

            if (radius < 0) {
                cout << "Radius cannot be negative." << endl;
            } else {
                double area = M_PI * pow(radius, 2);
                cout << "The area of the circle is: " << fixed << setprecision(2) << area << endl;
            }
        } else if (choice == 2) {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;

            if (length < 0 || width < 0) {
                cout << "Length and width cannot be negative." << endl;
            } else {
                double area = length * width;
                cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;
            }
        } else if (choice == 3) {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;

            if (base < 0 || height < 0) {
                cout << "Base and height cannot be negative." << endl;
            } else {
                double area = 0.5 * base * height;
                cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;
            }
        }
    }

    return 0;
}