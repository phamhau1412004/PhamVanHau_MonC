#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double speedOfSoundCO2 = 258.0;
    const double speedOfSoundAir = 331.5;
    const double speedOfSoundHelium = 972.0;
    const double speedOfSoundHydrogen = 1270.0;

    char choice;
    double time, distance;

    cout << "Select a gas (c: Carbon Dioxide, a: Air, h: Helium, or y: Hydrogen): ";
    cin >> choice;

    if (choice == 'c' || choice == 'a' || choice == 'h' || choice == 'y') {
        cout << "Enter the time in seconds (0-30): ";
        cin >> time;

        if (time >= 0 && time <= 30) {
            switch (choice) {
                case 'c':
                    distance = speedOfSoundCO2 * time;
                    break;
                case 'a':
                    distance = speedOfSoundAir * time;
                    break;
                case 'h':
                    distance = speedOfSoundHelium * time;
                    break;
                case 'y':
                    distance = speedOfSoundHydrogen * time;
                    break;
            }

            cout << "The source of the sound is approximately " << fixed << setprecision(2) << distance << " meters away." << endl;
        } else {
            cout << "Invalid time. Please enter a time between 0 and 30 seconds." << endl;
        }
    } else {
        cout << "Invalid choice. Please select 'c', 'a', 'h', or 'y' for the gas." << endl;
    }

    return 0;
}
