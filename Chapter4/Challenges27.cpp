#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number within the range of 1 to 10
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    // Input validation: Check if the number is within the valid range
    if (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10." << endl;
    } else {
        // Use a switch statement to display the Roman numeral version
        cout << "The Roman numeral version of " << number << " is: ";
        switch (number) {
            case 1:
                cout << "I";
                break;
            case 2:
                cout << "II";
                break;
            case 3:
                cout << "III";
                break;
            case 4:
                cout << "IV";
                break;
            case 5:
                cout << "V";
                break;
            case 6:
                cout << "VI";
                break;
            case 7:
                cout << "VII";
                break;
            case 8:
                cout << "VIII";
                break;
            case 9:
                cout << "IX";
                break;
            case 10:
                cout << "X";
                break;
        }
        cout << endl;
    }

    return 0;
}