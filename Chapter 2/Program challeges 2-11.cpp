#include <iostream>
using namespace std;

int main() {
    int gasTank = 20;
    double townMPG = 23.5;
    double highwayMPG = 28.9;

    double townDistance = gasTank * townMPG;
    double highwayDistance = gasTank * highwayMPG;

    cout << "Distance in town: " << townDistance << " miles" << endl;
    cout << "Distance on the highway: " << highwayDistance << " miles" << endl;

    return 0;
}
