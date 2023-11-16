#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstRunner, secondRunner, thirdRunner;
    double firstTime, secondTime, thirdTime;

    cout << "Enter the name of the first runner: ";
    cin >> firstRunner;
    cout << "Enter the time it took for the first runner to finish (in seconds): ";
    cin >> firstTime;

    cout << "Enter the name of the second runner: ";
    cin >> secondRunner;
    cout << "Enter the time it took for the second runner to finish (in seconds): ";
    cin >> secondTime;

    cout << "Enter the name of the third runner: ";
    cin >> thirdRunner;
    cout << "Enter the time it took for the third runner to finish (in seconds): ";
    cin >> thirdTime;

    if (firstTime < 0 || secondTime < 0 || thirdTime < 0) {
        cout << "Invalid input. Time must be a positive number." << endl;
        return 1;
    }

    if (firstTime < secondTime && firstTime < thirdTime) {
        cout << "First Place: " << firstRunner << endl;
        if (secondTime < thirdTime) {
            cout << "Second Place: " << secondRunner << endl;
            cout << "Third Place: " << thirdRunner << endl;
        } else {
            cout << "Second Place: " << thirdRunner << endl;
            cout << "Third Place: " << secondRunner << endl;
        }
    } else if (secondTime < firstTime && secondTime < thirdTime) {
        cout << "First Place: " << secondRunner << endl;
        if (firstTime < thirdTime) {
            cout << "Second Place: " << firstRunner << endl;
            cout << "Third Place: " << thirdRunner << endl;
        } else {
            cout << "Second Place: " << thirdRunner << endl;
            cout << "Third Place: " << firstRunner << endl;
        }
    } else {
        cout << "First Place: " << thirdRunner << endl;
        if (firstTime < secondTime) {
            cout << "Second Place: " << firstRunner << endl;
            cout << "Third Place: " << secondRunner << endl;
        } else {
            cout << "Second Place: " << secondRunner << endl;
            cout << "Third Place: " << firstRunner << endl;
        }
    }

    return 0;
}