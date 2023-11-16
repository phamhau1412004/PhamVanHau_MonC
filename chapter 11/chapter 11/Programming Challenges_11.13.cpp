#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Structure to store drink data
struct Drink {
    string name;
    double cost;
    int quantity;
};

int main() {
    // Initialize the array of drink structures
    Drink drinks[5] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    double totalEarnings = 0.0;
    
    while (true) {
        // Display the list of available drinks
        cout << "Welcome to the Soft Drink Machine!" << endl;
        cout << "Available Drinks:\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << drinks[i].name << " - $" << drinks[i].cost;
            if (drinks[i].quantity == 0) {
                cout << " (Sold Out)";
            }
            cout << endl;
        }

        // Ask the user to select a drink or quit
        int choice;
        cout << "Enter the number of the drink you want (1-5) or 0 to quit: ";
        cin >> choice;

        if (choice == 0) {
            break; // Quit the program
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select a valid drink or enter 0 to quit." << endl;
            continue;
        }

        // Ask the user to enter money
        double money;
        cout << "Enter the amount of money you want to insert (up to $1.00): $";
        cin >> money;

        if (money <= 0.0 || money > 1.0) {
            cout << "Invalid amount. Please insert a valid amount (between $0.01 and $1.00)." << endl;
            continue;
        }

        int drinkIndex = choice - 1;
        Drink& selectedDrink = drinks[drinkIndex];

        if (selectedDrink.quantity == 0) {
            cout << "Sorry, " << selectedDrink.name << " is sold out. Please make another selection." << endl;
            continue;
        }

        if (money < selectedDrink.cost) {
            cout << "Insufficient funds. Please insert more money to purchase " << selectedDrink.name << "." << endl;
        } else {
            double change = money - selectedDrink.cost;
            totalEarnings += selectedDrink.cost;
            selectedDrink.quantity--;
            cout << "You have purchased a " << selectedDrink.name << ". Your change is: $" << change << endl;
        }
    }

    // Display total earnings
    cout << "Total earnings: $" << fixed << setprecision(2) << totalEarnings << endl;

    return 0;
}
