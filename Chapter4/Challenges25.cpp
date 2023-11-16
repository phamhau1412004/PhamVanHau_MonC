#include <iostream>
using namespace std;

int main() {
    double length1, width1, area1;
    double length2, width2, area2;

    // Input for the first rectangle
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    // Calculate the area of the first rectangle
    area1 = length1 * width1;

    // Input for the second rectangle
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    // Calculate the area of the second rectangle
    area2 = length2 * width2;

    // Compare the areas of the two rectangles
    if (area1 > area2) {
        cout << "The first rectangle has a greater area." << endl;
    } else if (area2 > area1) {
        cout << "The second rectangle has a greater area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }

    return 0;
}