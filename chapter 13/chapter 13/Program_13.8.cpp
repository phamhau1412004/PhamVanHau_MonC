#include <iostream>
#include <iomanip>
#include "Rectangle.h" // Include the appropriate header file

using namespace std;

int main() {
    double houseWidth, houseLength;

    // Get the width of the house.
    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;

    // Get the length of the house.
    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    // Create a Rectangle object.
    Rectangle house(houseWidth, houseLength);

    // Display the house's width, length, and area.
    cout << setprecision(2) << fixed;
    cout << "The house is " << house.getWidth() << " feet wide.\n";
    cout << "The house is " << house.getLength() << " feet long.\n";
    cout << "The house is " << house.getArea() << " square feet in area.\n";

    return 0;
}
