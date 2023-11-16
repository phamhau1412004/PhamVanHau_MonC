#include <iostream>
using namespace std;

int main() {
    int gasTank = 15;
    int milesDriven = 375;

    double milesPerGallon = static_cast<double>(milesDriven) / gasTank;

    cout << "Miles per gallon: " << milesPerGallon << endl;

    return 0;
}
