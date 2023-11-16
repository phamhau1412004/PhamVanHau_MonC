#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char package;
    double minutes, totalAmount;
    string month;
    int maxMinutes = 0;

    cout << "Mobile Service Provider Packages:" << endl;
    cout << "A: $39.99 per month, 450 minutes included, $0.45 per additional minute" << endl;
    cout << "B: $59.99 per month, 900 minutes included, $0.40 per additional minute" << endl;
    cout << "C: $69.99 per month, unlimited minutes" << endl;
    cout << "Enter your package choice (A, B, or C): ";
    cin >> package;

    if (package == 'A' || package == 'B' || package == 'C') {
        cout << "Enter the month (e.g., January, February, etc.): ";
        cin >> month;

        if (month == "January" || month == "March" || month == "May" ||
            month == "July" || month == "August" || month == "October" ||
            month == "December") {
            maxMinutes = 744;
        } else if (month == "April" || month == "June" || month == "September" ||
                   month == "November") {
            maxMinutes = 720;
        } else if (month == "February") {
            maxMinutes = 672;
        } else {
            cout << "Invalid month. Please enter a valid month name." << endl;
            return 1;
        }

        cout << "Enter the number of minutes used: ";
        cin >> minutes;

        if (minutes >= 0 && minutes <= maxMinutes) {
            double packageASavings = 0.0;
            double packageBSavings = 0.0;

            if (package == 'A') {
                if (minutes <= 450) {
                    totalAmount = 39.99;
                } else {
                    totalAmount = 39.99 + (minutes - 450) * 0.45;
                }

                // Calculate savings for Package B and Package C
                if (totalAmount > 59.99) {
                    packageBSavings = totalAmount - 59.99;
                }
                if (totalAmount > 69.99) {
                    packageASavings = totalAmount - 69.99;
                }
            } else if (package == 'B') {
                if (minutes <= 900) {
                    totalAmount = 59.99;
                } else {
                    totalAmount = 59.99 + (minutes - 900) * 0.40;
                }

                // Calculate savings for Package C
                if (totalAmount > 69.99) {
                    packageBSavings = totalAmount - 69.99;
                }
            } else {
                totalAmount = 69.99; // Package C, unlimited minutes
            }

            cout << "Your total monthly bill is: $" << fixed << setprecision(2) << totalAmount << endl;

            if (packageASavings > 0) {
                cout << "Savings for Package A customers if they purchased Package B or C: $" << fixed << setprecision(2) << packageASavings << endl;
            }

            if (packageBSavings > 0) {
                cout << "Savings for Package B customers if they purchased Package C: $" << fixed << setprecision(2) << packageBSavings << endl;
            }
        } else {
            cout << "Invalid number of minutes. Please enter a non-negative value within the maximum for the selected month." << endl;
        }
    } else {
        cout << "Invalid package choice. Please select package A, B, or C." << endl;
    }

    return 0;
}