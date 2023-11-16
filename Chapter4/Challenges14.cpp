#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    // Input weight in pounds
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    // Input height in inches
    cout << "Enter your height in inches: ";
    cin >> height;

    // Calculate BMI using the formula
    bmi = (weight * 703) / (height * height);

    // Display the calculated BMI
    cout << "Your BMI is: " << bmi << endl;

    // Determine weight status based on BMI
    if (bmi >= 18.5 && bmi <= 25) {
        cout << "Your weight is optimal." << endl;
    } else if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }

    return 0;
}