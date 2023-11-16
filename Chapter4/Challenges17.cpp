#include <iostream>
using namespace std;

int main() {
    double balance;
    int numChecks;
    double serviceFee = 10.0;

    cout << "Enter the beginning balance: $";
    cin >> balance;

    if (balance < 0) {
        cout << "URGENT: The account is overdrawn!" << endl;
        return 1;
    }

    cout << "Enter the number of checks written: ";
    cin >> numChecks;

    if (numChecks < 0) {
        cout << "Invalid input. Number of checks written cannot be negative." << endl;
        return 1;
    }

    if (balance < 400) {
        serviceFee += 15.0;
    }

    if (numChecks >= 60) {
        serviceFee += numChecks * 0.04;
    } else if (numChecks >= 40) {
        serviceFee += numChecks * 0.06;
    } else if (numChecks >= 20) {
        serviceFee += numChecks * 0.08;
    } else {
        serviceFee += numChecks * 0.10;
    }

    cout << "Service fees for the month: $" << serviceFee << endl;

    return 0;
}