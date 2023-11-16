#include <iostream>
using namespace std;

const int NUM_EMPLOYEES = 7;

int main() {
    long empId[NUM_EMPLOYEES] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter the number of hours worked for employee " << empId[i] << ": ";
        cin >> hours[i];

        while (hours[i] < 0) {
            cout << "Please enter a non-negative value for hours: ";
            cin >> hours[i];
        }

        cout << "Enter the hourly pay rate for employee " << empId[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.00) {
            cout << "Pay rate must be at least $15.00. Enter a valid pay rate: ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << "\nEmployee ID\tGross Wages\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << empId[i] << "\t\t$" << wages[i] << endl;
    }

    return 0;
}
