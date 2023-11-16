#include <iostream>
using namespace std;

int main() {
    int squareFeet = 391876;
    double acre = 43560.0;

    double numAcre = squareFeet / acre;

    cout << "Number of acres: " << numAcre << " acres" << endl;

    return 0;
}
