#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Use the conditional operator to determine the smaller and larger numbers
    double smaller = (num1 < num2) ? num1 : num2;
    double larger = (num1 > num2) ? num1 : num2;

    // Display the results
    cout << "The smaller number is: " << smaller << endl;
    cout << "The larger number is: " << larger << endl;

    return 0;
}