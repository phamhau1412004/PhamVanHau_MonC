#include <iostream>
using namespace std;

int main() {
    double oceanRiseRate = 1.5;  // millimeters per year

    double riseIn5Years = oceanRiseRate * 5;
    double riseIn7Years = oceanRiseRate * 7;
    double riseIn10Years = oceanRiseRate * 10;

    cout << "In 5 years, the ocean's level will be " << riseIn5Years << " millimeters higher." << endl;
    cout << "In 7 years, the ocean's level will be " << riseIn7Years << " millimeters higher." << endl;
    cout << "In 10 years, the ocean's level will be " << riseIn10Years << " millimeters higher." << endl;

    return 0;
}
