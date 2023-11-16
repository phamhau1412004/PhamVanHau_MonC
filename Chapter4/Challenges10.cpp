#include <iostream>
using namespace std;

int main() {
    double wavelength;

    cout << "Enter the wavelength of the electromagnetic wave in meters: ";
    cin >> wavelength;

    if (wavelength >= 1E-2) {
        cout << "Radio Waves" << endl;
    } else if (wavelength >= 1E-3) {
        cout << "Microwaves" << endl;
    } else if (wavelength >= 7E-7) {
        cout << "Infrared" << endl;
    } else if (wavelength >= 4E-7) {
        cout << "Visible Light" << endl;
    } else if (wavelength >= 1E-8) {
        cout << "Ultraviolet" << endl;
    } else if (wavelength >= 1E-11) {
        cout << "X Rays" << endl;
    } else {
        cout << "Gamma Rays" << endl;
    }

    return 0;
}