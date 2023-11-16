#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours;       // hours is an empty vector
    vector<double> payRate;  // payRate is an empty vector
    int numEmployees;        // The number of employees
    int index;               // Loop counter

    // Get the number of employees.
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Input the payroll data.
    cout << "Enter the hours worked by " << numEmployees;
    cout << " employees and their hourly rates.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours;     // To hold the number of hours entered
        double tempRate;   // To hold the pay rate entered
        cout << "Hours worked by employee #" << (index + 1);
        cout << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Thêm một phần tử vào vector hours
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Thêm một phần tử vào vector payRate
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
