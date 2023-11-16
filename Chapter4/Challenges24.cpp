#include <iostream>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters;
    
    cout << "Change for a Dollar Game\n";
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value in cents
    int totalCents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25);

    // Check if the total value is equal to one dollar
    if (totalCents == 100) {
        cout << "Congratulations! You made exactly one dollar!\n";
    } else if (totalCents < 100) {
        cout << "Sorry, the amount is less than one dollar.\n";
    } else {
        cout << "Sorry, the amount is more than one dollar.\n";
    }

    return 0;
}