#include <iostream> // Include the necessary library for input and output operations.
using namespace std; // Use the standard namespace.

int main() // Entry point of the program.
{
    int length, width, area; // Declare integer variables to store length, width, and area.

    cout << "This program calculates the area of a rectangle.\n"; // Display an introductory message.
    cout << "What is the length of the rectangle? "; // Ask the user for the length.
    cin >> length; // Read the length input.
    cout << "What is the width of the rectangle? "; // Ask the user for the width.
    cin >> width; // Read the width input.
    area = length * width; // Calculate the area.
    cout << "The area of the rectangle is " << area << ".\n"; // Display the calculated area.
    return 0; // Return 0 to indicate successful program execution.
}