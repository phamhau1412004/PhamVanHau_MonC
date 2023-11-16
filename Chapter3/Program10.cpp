#include <iostream>
using namespace std;

int main()
{
    int number = 65;

    // Display the value of the number variable as an integer.
    cout << number << endl;

    // Display the value of number converted to the char data type.
    cout << static_cast<char>(number) << endl;

    return 0;
}