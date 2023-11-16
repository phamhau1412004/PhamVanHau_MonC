#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int score1, score2, score3; // To hold three test scores
    double average; // To hold the average score

    // Get the three test scores.
    cout << "Enter 3 test scores, and I will average them: ";
    cin >> score1 >> score2 >> score3;

    // Calculate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;

    // Corrected the if statement using the equality operator.
    if (average == 100) // Corrected! This checks for equality.
        cout << "Congratulations! That's a perfect score!\n";

    return 0;
}