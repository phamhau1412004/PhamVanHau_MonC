#include <iostream>
using namespace std;

// Structure for hourly paid worker
struct HourlyPaid {
    double HoursWorked;
    double HourlyRate;
};

// Structure for salaried worker
struct Salaried {
    double Salary;
    double Bonus;
};

// Union for storing either hourly paid or salaried worker data
union PayData {
    HourlyPaid hourlyWorker;
    Salaried salariedWorker;
};

int main() {
    PayData payInfo;
    char workerType;

    cout << "Enter 'H' for hourly paid worker or 'S' for salaried worker: ";
    cin >> workerType;

    if (workerType == 'H' || workerType == 'h') {
        cout << "Enter hours worked: ";
        cin >> payInfo.hourlyWorker.HoursWorked;
        cout << "Enter hourly rate: ";
        cin >> payInfo.hourlyWorker.HourlyRate;

        if (payInfo.hourlyWorker.HoursWorked < 0 || payInfo.hourlyWorker.HoursWorked > 80) {
            cout << "Invalid input. Hours worked must be between 0 and 80." << endl;
            return 1;
        }

        double pay = payInfo.hourlyWorker.HoursWorked * payInfo.hourlyWorker.HourlyRate;
        cout << "Hourly paid worker's pay: $" << pay << endl;
    } else if (workerType == 'S' || workerType == 's') {
        cout << "Enter salary: ";
        cin >> payInfo.salariedWorker.Salary;
        cout << "Enter bonus: ";
        cin >> payInfo.salariedWorker.Bonus;

        if (payInfo.salariedWorker.Salary < 0 || payInfo.salariedWorker.Bonus < 0) {
            cout << "Invalid input. Salary and bonus must be non-negative." << endl;
            return 1;
        }

        double pay = payInfo.salariedWorker.Salary + payInfo.salariedWorker.Bonus;
        cout << "Salaried worker's pay: $" << pay << endl;
    } else {
        cout << "Invalid choice. Please enter 'H' for hourly paid or 'S' for salaried worker." << endl;
    }

    return 0;
}
