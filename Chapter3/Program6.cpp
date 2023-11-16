#include <iostream>
#include <cmath> // Include the <cmath> library (not needed in this program).
using namespace std;

int main()
{
    double test1, test2, test3; // Variables to hold the test scores
    double average; // Variable to hold the average

    // Get the three test scores from the user.
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;

    // Calculate the average of the test scores.
    average = (test1 + test2 + test3) / 3.0;

    // Display the calculated average.
    cout << "The average score is: " << average << endl;

    return 0;
}