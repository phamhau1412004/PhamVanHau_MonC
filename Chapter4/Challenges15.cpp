#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    // Prompt the user to enter the names of two primary colors
    cout << "Enter the name of the first primary color (red, blue, or yellow): ";
    cin >> color1;
    cout << "Enter the name of the second primary color (red, blue, or yellow): ";
    cin >> color2;

    // Check the user's input and determine the resulting secondary color
    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        cout << "Mixing red and blue results in purple." << endl;
    } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        cout << "Mixing red and yellow results in orange." << endl;
    } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        cout << "Mixing blue and yellow results in green." << endl;
    } else {
        cout << "Error: Invalid color input. Please enter 'red,' 'blue,' or 'yellow' only." << endl;
    }

    return 0;
}