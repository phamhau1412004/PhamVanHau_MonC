#include <iostream>
using namespace std;

int main() {
    int month, year;
    
    cout << "Enter a month (1-12): ";
    cin >> month;
    
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month between 1 and 12.\n";
        return 1;  // Exit the program with an error code
    }

    cout << "Enter a year: ";
    cin >> year;

    bool isLeapYear = false;
    
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        isLeapYear = true;
    }

    int daysInMonth;

    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
        default:
            daysInMonth = 31;
            break;
    }

    cout << daysInMonth << " days" << endl;

    return 0;
}