#include <iostream>
using namespace std;

int main() {
    double payRate;  // Holds the hourly pay rate
    double hours;    // Holds the hours worked
    int employNumber; // Holds the employee number

    // Input the employee number
    cout << "Enter employee number: ";
    cin >> employNumber;

    // Input the pay rate
    cout << "Enter hourly pay rate: $";
    cin >> payRate;

    // Input the hours worked
    cout << "Enter hours worked: ";
    cin >> hours;

    // Calculate the total pay
    double totalPay = payRate * hours;

    // Display the employee number and total pay
    cout << "Employee #" << employNumber << " earned: $" << totalPay << endl;

    return 0;
}
