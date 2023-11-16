#include <iostream>
#include <string>

using namespace std;

int main() {
    int temperature;
    
    // Substance freezing and boiling points
    struct Substance {
        string name;
        int freezingPoint;
        int boilingPoint;
    };

    Substance substances[] = {
        {"Ethyl alcohol", -173, 172},
        {"Mercury", -38, 676},
        {"Oxygen", -362, -306},
        {"Water", 32, 212}
    };

    cout << "Enter a temperature in °F: ";
    cin >> temperature;

    cout << "Substances that will ";
    if (temperature <= 0) {
        cout << "freeze: ";
        for (const Substance& s : substances) {
            if (temperature <= s.freezingPoint) {
                cout << s.name << " ";
            }
        }
    } else {
        cout << "boil: ";
        for (const Substance& s : substances) {
            if (temperature >= s.boilingPoint) {
                cout << s.name << " ";
            }
        }
    }

    cout << "at " << temperature << "°F." << endl;

    return 0;
}