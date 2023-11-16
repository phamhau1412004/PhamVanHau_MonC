#include <iostream>
using namespace std;

int main()
{
    float test;

    // Calculate to potentially cause overflow.
    test = 2.0e38 * 1000; // Should overflow test.
    cout << test << endl;

    // Calculate to potentially cause underflow.
    test = 2.0e-38 / 2.0e38; // Should underflow test.
    cout << test << endl;

    return 0;
}