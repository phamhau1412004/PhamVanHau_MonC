#include <iostream>
using namespace std;

int main() {
    int booksPurchased;
    int pointsEarned = 0;

    cout << "Enter the number of books purchased this month: ";
    cin >> booksPurchased;

    if (booksPurchased == 0) {
        pointsEarned = 0;
    } else if (booksPurchased == 1) {
        pointsEarned = 5;
    } else if (booksPurchased == 2) {
        pointsEarned = 15;
    } else if (booksPurchased == 3) {
        pointsEarned = 30;
    } else if (booksPurchased >= 4) {
        pointsEarned = 60;
    }

    cout << "You've earned " << pointsEarned << " points this month." << endl;

    return 0;
}