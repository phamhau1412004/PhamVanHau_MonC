#include <iostream>
using namespace std;

int main() {
    double payRate; // Hourly pay rate
    double hours; // Hours worked
    int employeeNumber; // Employee number

    // Get input from the user
    cout << "Enter the employee number: ";
    cin >> employeeNumber;

    cout << "Enter the hourly pay rate: $";
    cin >> payRate;

    cout << "Enter the number of hours worked: ";
    cin >> hours;

    // Calculate the gross pay
    double grossPay = payRate * hours;

    // Display the results
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hourly Pay Rate: $" << payRate << endl;
    cout << "Hours Worked: " << hours << " hours" << endl;
    cout << "Gross Pay: $" << grossPay << endl;

    return 0;
}
