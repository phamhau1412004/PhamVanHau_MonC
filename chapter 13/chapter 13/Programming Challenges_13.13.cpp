#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Coin {
private:
    string sideUp;

public:
    Coin() {
        // Initialize random seed
        srand(static_cast<unsigned>(time(0));

        // Randomly determine the side initially facing up
        int randomValue = rand() % 2; // Generate 0 or 1
        if (randomValue == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    void toss() {
        // Randomly determine the side after tossing
        int randomValue = rand() % 2; // Generate 0 or 1
        if (randomValue == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    string getSideUp() {
        return sideUp;
    }
};

int main() {
    Coin quarter, dime, nickel;
    double balance = 0.0;
    const double QUARTER_VALUE = 0.25;
    const double DIME_VALUE = 0.10;
    const double NICKEL_VALUE = 0.05;

    while (balance < 1.0) {
        quarter.toss();
        dime.toss();
        nickel.toss();

        if (quarter.getSideUp() == "heads") {
            balance += QUARTER_VALUE;
        }

        if (dime.getSideUp() == "heads") {
            balance += DIME_VALUE;
        }

        if (nickel.getSideUp() == "heads") {
            balance += NICKEL_VALUE;
        }

        cout << "Quarter: " << quarter.getSideUp() << ", Dime: " << dime.getSideUp() << ", Nickel: " << nickel.getSideUp() << endl;
        cout << "Current Balance: $" << balance << endl;
    }

    if (balance == 1.0) {
        cout << "Congratulations, you win the game!" << endl;
    } else {
        cout << "Sorry, you lose the game. Balance exceeded $1." << endl;
    }

    return 0;
}
