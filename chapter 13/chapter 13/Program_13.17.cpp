#include <iostream>
#include "IntegerList.h"
using namespace std;

int main()
{
    const int SIZE = 20;
    IntegerList numbers(SIZE);
    int val, x;

    // Store 9s in the list and display an asterisk
    // each time a 9 is successfully stored.
    for (x = 0; x < SIZE; x++)
    {
        if (numbers.setElement(x, 9))
        {
            cout << "* ";
        }
    }
    cout << endl;

    // Display the values in the list.
    for (x = 0; x < SIZE; x++)
    {
        val = numbers.getElement(x);
        cout << val << " ";
    }
    cout << endl;

    // Attempt to store a value outside the list's bounds.
    if (numbers.setElement(50, 9))
    {
        cout << "Element 50 successfully set.\n";
    }
    else
    {
        cout << "Element 50 cannot be set because it's outside the list's bounds.\n";
    }

    return 0;
}
