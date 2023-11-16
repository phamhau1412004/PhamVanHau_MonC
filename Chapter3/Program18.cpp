#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string city;

    cout << "Please enter your name: ";
    cin >> name; // Reads input until the first whitespace character.
    cout << "Enter the city you live in: ";
    cin >> city; // Reads input until the first whitespace character.

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
}