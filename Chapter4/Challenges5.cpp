#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double startTime, minutes;
    const double rate1 = 0.05;
    const double rate2 = 0.45;
    const double rate3 = 0.20;

    cout << "Enter the starting time (HH.MM): ";
    cin >> startTime;

    int hours = static_cast<int>(startTime);
    int minutesPart = static_cast<int>((startTime - hours) * 100);

    if (hours >= 0 && hours <= 23 && minutesPart >= 0 && minutesPart <= 59) {
        cout << "Enter the number of minutes of the call: ";
        cin >> minutes;

        if (minutes >= 0) {
            double totalCost;

            if (hours >= 0 && hours < 7) {
                totalCost = minutes * rate1;
            } else if (hours >= 7 && hours < 19) {
                totalCost = minutes * rate2;
            } else {
                totalCost = minutes * rate3;
            }

            cout << "The total charge for the call is: $" << fixed << setprecision(2) << totalCost << endl;
        } else {
            cout << "Invalid number of minutes. Please enter a non-negative value." << endl;
        }
    } else {
        cout << "Invalid time. Please enter a valid time in the format HH.MM." << endl;
    }

    return 0;
}