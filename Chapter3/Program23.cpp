#include <iostream>
using namespace std;

int main()
{
    char ch; // Define a character variable
    int number; // Define an integer variable

    cout << "Enter a number: ";
    cin >> number; // Read an integer

    cin.ignore(); // Consume the newline character

    cout << "Enter a character: ";
    ch = cin.get(); // Read a character

    cout << "Thank You!\n";
    return 0;
}