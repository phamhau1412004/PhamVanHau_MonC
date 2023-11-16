#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>    // For the sqrt and pow functions
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;

    // Calculate the length of the hypotenuse using the Pythagorean theorem
    c = sqrt(pow(a, 2.0) + pow(b, 2.0));

    cout << "The length of the hypotenuse is ";
    cout << setprecision(2) << c << endl;
    return 0;
}