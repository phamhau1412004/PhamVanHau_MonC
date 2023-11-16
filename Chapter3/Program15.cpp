#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double quotient, number1 = 132.364, number2 = 26.91;

    quotient = number1 / number2;
    cout << quotient << endl; // Display the original value
    cout << setprecision(5) << quotient << endl; // Display with precision set to 5
    cout << setprecision(4) << quotient << endl; // Display with precision set to 4
    cout << setprecision(3) << quotient << endl; // Display with precision set to 3
    cout << setprecision(2) << quotient << endl; // Display with precision set to 2
    cout << setprecision(1) << quotient << endl; // Display with precision set to 1

    return 0;
}