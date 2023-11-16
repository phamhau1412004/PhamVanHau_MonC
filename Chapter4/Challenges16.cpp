#include <iostream>
using namespace std;

int main() {
    long long seconds;

    // Input the number of seconds
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        int days = seconds / 86400;
        seconds %= 86400;
        cout << "Days: " << days << endl;
    }

    if (seconds >= 3600) {
        int hours = seconds / 3600;
        seconds %= 3600;
        cout << "Hours: " << hours << endl;
    }

    if (seconds >= 60) {
        int minutes = seconds / 60;
        seconds %= 60;
        cout << "Minutes: " << minutes << endl;
    }

    cout << "Seconds: " << seconds << endl;

    return 0;
}