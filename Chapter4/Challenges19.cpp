#include <iostream>
using namespace std;

int main() {
    double weight, distance, rate, charges;

    cout << "Enter the weight of the package (in kilograms): ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Weight must be between 0 and 20 kilograms." << endl;
        return 1;
    }

    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Distance must be between 10 and 3000 miles." << endl;
        return 1;
    }

    if (weight <= 2)
        rate = 1.10;
    else if (weight <= 6)
        rate = 2.20;
    else if (weight <= 10)
        rate = 3.70;
    else
        rate = 4.80;

    charges = (distance / 500) * rate;

    cout << "Shipping charges: $" << charges << endl;

    return 0;
}