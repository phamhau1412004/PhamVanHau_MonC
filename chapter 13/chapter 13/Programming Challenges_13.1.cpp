#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    // Function to print the date in the format MM/DD/YYYY
    void print1() {
        cout << month << "/" << day << "/" << year << endl;
    }

    // Function to print the date in the format Month DD, YYYY
    void print2() {
        string months[] = {
            "January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"
        };
        cout << months[month - 1] << " " << day << ", " << year << endl;
    }

    // Function to print the date in the format DD Month YYYY
    void print3() {
        string months[] = {
            "January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"
        };
        cout << day << " " << months[month - 1] << " " << year << endl;
    }

    // Input validation for day and month
    bool isValidDate() {
        if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    int m, d, y;

    cout << "Enter a date (MM DD YYYY): ";
    cin >> m >> d >> y;

    Date date(m, d, y);

    if (date.isValidDate()) {
        cout << "Date in MM/DD/YYYY format: ";
        date.print1();

        cout << "Date in Month DD, YYYY format: ";
        date.print2();

        cout << "Date in DD Month YYYY format: ";
        date.print3();
    } else {
        cout << "Invalid date. Please enter valid month (1-12) and day (1-31)." << endl;
    }

    return 0;
}
