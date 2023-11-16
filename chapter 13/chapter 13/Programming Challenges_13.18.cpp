#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Die {
private:
    int sides;

public:
    Die(int numSides) {
        sides = numSides;
        srand(time(0));
    }

    int roll() {
        return rand() % sides + 1;
    }
};

int main() {
    Die die(6);
    int computerTotal = 0;
    int playerTotal = 0;

    cout << "Welcome to the Dice Blackjack Game!" << endl;

    while (playerTotal <= 21) {
        char rollAgain;
        
        // Computer's turn
        int computerRoll1 = die.roll();
        int computerRoll2 = die.roll();
        computerTotal = computerRoll1 + computerRoll2;

        cout << "Computer rolled a " << computerRoll1 << " and a " << computerRoll2 << ". Total: " << computerTotal << endl;

        // Player's turn
        cout << "Do you want to roll the dice? (y/n): ";
        cin >> rollAgain;

        if (rollAgain == 'y' || rollAgain == 'Y') {
            int playerRoll1 = die.roll();
            int playerRoll2 = die.roll();
            playerTotal += playerRoll1 + playerRoll2;

            cout << "You rolled a " << playerRoll1 << " and a " << playerRoll2 << ". Total: " << playerTotal << endl;

            if (playerTotal > 21) {
                cout << "You went over 21. Computer wins!" << endl;
                break;
            }
        } else {
            break;
        }
    }

    // Determine the winner
    if (playerTotal > 21) {
        cout << "Computer wins!" << endl;
    } else if (computerTotal > 21) {
        cout << "You win! Computer went over 21." << endl;
    } else if (playerTotal == computerTotal) {
        cout << "It's a tie!" << endl;
    } else if (playerTotal > computerTotal) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
