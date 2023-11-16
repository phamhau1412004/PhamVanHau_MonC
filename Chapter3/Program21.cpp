#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch); // Pause and wait for the user to press Enter.

    cout << "It has paused a second time. Please press Enter again.";
    ch = cin.get(); // Pause and wait for the user to press Enter.

    cout << "It has paused a third time. Please press Enter again.";
    cin.get(); // Pause and wait for the user to press Enter.

    cout << "Thank you!";
    return 0;
}