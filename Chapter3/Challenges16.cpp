#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "This program has paused. Press Enter to continue." << endl;
    cin.get(ch);
    cout <<" It has paused a third time. Please press Enter again." << endl;
    cin.get();
    cout << "Thanks you!" << endl;
    return 0;
}