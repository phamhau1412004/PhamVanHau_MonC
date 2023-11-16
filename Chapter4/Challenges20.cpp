#include <iostream>
using namespace std;

int main() {
    double mass, weight;

    // Input mass in kilograms
    cout << "Enter the object's mass in kilograms: ";
    cin >> mass;

    // Calculate weight using the formula
    weight = mass * 9.8;

    // Display the calculated weight
    cout << "The object's weight is " << weight << " newtons." << endl;

    // Check if the object is too heavy or too light
    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    } else if (weight < 10) {
        cout << "The object is too light." << endl;
    }

    return 0;
}
