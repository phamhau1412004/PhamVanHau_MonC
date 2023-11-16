#include <iostream>
#include <string>
using namespace std;

const int NUM_PLAYERS = 12;

// Structure to store soccer player data
struct SoccerPlayer {
    string name;
    int number;
    int pointsScored;
};

int main() {
    SoccerPlayer team[NUM_PLAYERS];
    int totalPoints = 0;
    int maxPoints = -1; // Initialize maxPoints to a negative value
    string playerNameWithMaxPoints;

    cout << "Enter data for each soccer player:\n";

    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "Player " << i + 1 << ":\n";

        // Input and validate player's number
        do {
            cout << "Player's Number: ";
            cin >> team[i].number;
            if (team[i].number < 0) {
                cout << "Please enter a non-negative number for the player's number.\n";
            }
        } while (team[i].number < 0);

        cin.ignore(); // Clear newline character

        // Input player's name
        cout << "Player's Name: ";
        getline(cin, team[i].name);

        // Input and validate points scored
        do {
            cout << "Points Scored by Player: ";
            cin >> team[i].pointsScored;
            if (team[i].pointsScored < 0) {
                cout << "Please enter a non-negative value for points scored.\n";
            }
        } while (team[i].pointsScored < 0);

        totalPoints += team[i].pointsScored;

        if (team[i].pointsScored > maxPoints) {
            maxPoints = team[i].pointsScored;
            playerNameWithMaxPoints = team[i].name;
        }

        cin.ignore(); // Clear newline character
    }

    cout << "\nSoccer Player Data:\n";
    cout << "------------------------\n";
    cout << "Player Number | Player Name | Points Scored\n";
    cout << "--------------------------------------------\n";
    
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "      " << team[i].number << "     | " << team[i].name << " | " << team[i].pointsScored << "\n";
    }

    cout << "--------------------------------------------\n";
    cout << "Total Points Earned by the Team: " << totalPoints << "\n";
    cout << "Player with Most Points: " << playerNameWithMaxPoints << " (" << maxPoints << " points)\n";

    return 0;
}
