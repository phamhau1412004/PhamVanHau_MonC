#include <iostream>
#include <ctime>   // For time function
#include <cstdlib> // For rand and srand functions
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
    Coin myCoin;
    int headsCount = 0;
    int tailsCount = 0;

    cout << "The side initially facing up: " << myCoin.getSideUp() << endl;

    for (int i = 0; i < 20; i++) {
        myCoin.toss();
        cout << "After tossing " << (i + 1) << ": " << myCoin.getSideUp() << endl;
        if (myCoin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}
