#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string city;

    cout << "Please enter your name: ";
    getline(cin, name); // Reads the entire line, including spaces.
    cout << "Enter the city you live in: ";
    getline(cin, city); // Reads the entire line, including spaces.

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
}