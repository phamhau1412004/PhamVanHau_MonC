#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer and I will tell you if it\n";
    cout << "is odd or even. ";
    cin >> number;

    if (number % 2 == 0)
        cout << number << " is even.\n";
    else
        cout << number << " is odd.\n";

    return 0;
}