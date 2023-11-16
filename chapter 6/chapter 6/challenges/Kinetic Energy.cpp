#include <iostream>
using namespace std;

double kineticEnergy(double mass, double velocity) {
    const double KE = 0.5 * mass * velocity * velocity;
    return KE;
}

int main() {
    double mass, velocity;

    cout << "Nhập khối lượng của vật (kg): ";
    cin >> mass;
    cout << "Nhập vận tốc của vật (m/s): ";
    cin >> velocity;

    double energy = kineticEnergy(mass, velocity);

    cout << "Động năng của vật là " << energy << " joules." << endl;

    return 0;
}
