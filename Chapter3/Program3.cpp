#include <iostream>
using namespace std;

int main()
{
    int whole;
    double fractional;
    char letter;

    cout << "Enter an integer, a double, and a character: "; // Prompt the user for input.

    cin >> whole >> fractional >> letter; // Read an integer, a double, and a character from the user.

    cout << "Whole: " << whole << endl; // Display the integer value.
    cout << "Fractional: " << fractional << endl; // Display the double value.
    cout << "Letter: " << letter << endl; // Display the character value.

    return 0;
}