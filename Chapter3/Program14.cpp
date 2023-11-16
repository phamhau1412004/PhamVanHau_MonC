#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int intValue = 3928;
    double doubleValue = 91.5;
    string stringValue = "John J. Smith";

    // Display an integer with a specified width
    cout << "(" << setw(5) << intValue << ")" << endl;

    // Display a double with a specified width
    cout << "(" << setw(8) << doubleValue << ")" << endl;

    // Display a string with a specified width
    cout << "(" << setw(16) << stringValue << ")" << endl;

    return 0;
}