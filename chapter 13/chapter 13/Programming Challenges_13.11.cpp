#include <iostream>
using namespace std;

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    PayRoll() {
        hourlyPayRate = 0.0;
        hoursWorked = 0.0;
        totalPay = 0.0;
    }

    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours) {
        if (hours <= 60) {
            hoursWorked = hours;
        } else {
            cout << "Error: Hours worked cannot be greater than 60.\n";
        }
    }

    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }

    double getTotalPay() {
        return totalPay;
    }
};

int main() {
    const int numEmployees = 7;
    PayRoll employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        double payRate, hours;

        cout << "Enter hourly pay rate for Employee " << (i + 1) << ": $";
        cin >> payRate;
        employees[i].setHourlyPayRate(payRate);

        cout << "Enter hours worked for Employee " << (i + 1) << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);

        employees[i].calculateTotalPay();
    }

    cout << "\nGross Pay for Each Employee:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << (i + 1) << ": $" << employees[i].getTotalPay() << endl;
    }

    return 0;
}
