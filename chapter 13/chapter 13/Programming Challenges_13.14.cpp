#include <iostream>
#include <ctime>
#include <cstdlib>

class Die {
private:
    int sides;

public:
    Die(int numSides) {
        sides = numSides;
    }

    int roll() {
        return rand() % sides + 1;
    }
};

int main() {
    // Initialize random seed
    srand(static_cast<unsigned>(time(0));

    Die die(6); // Create a six-sided die
    int fishingPoints = 0;
    char playAgain;

    do {
        int dieRoll = die.roll();
        std::cout << "You caught item: " << dieRoll << std::endl;

        // Assign points based on the item caught
        switch (dieRoll) {
            case 1:
                fishingPoints += 10; // Huge fish
                break;
            case 2:
                fishingPoints += 1; // Old shoe
                break;
            case 3:
                fishingPoints += 5; // Little fish
                break;
            // Add more cases for other items if needed
        }

        std::cout << "Total Fishing Points: " << fishingPoints << std::endl;
        std::cout << "Do you want to fish again? (Y/N): ";
        std::cin >> playAgain;

    } while (toupper(playAgain) == 'Y');

    std::cout << "Total Fishing Points: " << fishingPoints << std::endl;

    if (fishingPoints >= 15) {
        std::cout << "Congratulations! You're a great fisherman!" << std::endl;
    } else if (fishingPoints >= 10) {
        std::cout << "Not bad! You're a decent fisherman." << std::endl;
    } else {
        std::cout << "Keep practicing! You need to improve your fishing skills." << std::endl;
    }

    return 0;
}
