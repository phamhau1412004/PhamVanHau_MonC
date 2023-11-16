#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    // Ask the user to enter the month, day, and year
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a day (1-31): ";
    cin >> day;
    cout << "Enter a two-digit year (e.g., 60 for 1960): ";
    cin >> year;

    // Check if the date is magic
    if (month * day == year) {
        cout << "The date is magic!" << endl;
    } else {
        cout << "The date is not magic." << endl;
    }

    return 0;
}