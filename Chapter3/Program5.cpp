#include <iostream>
#include <cmath> // Include the <cmath> library for the pow function.
using namespace std;

int main()
{
    const double PI = 3.14159; // Define a constant for Pi.
    double area, radius;

    cout << "This program calculates the area of a circle.\n";
    cout << "What is the radius of the circle? ";
    cin >> radius; // Read the radius input from the user.

    area = PI * pow(radius, 2.0); // Calculate the area using the formula for the area of a circle.

    cout << "The area is " << area << endl; // Display the calculated area.

    return 0;
}