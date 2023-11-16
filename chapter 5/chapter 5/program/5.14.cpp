#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents, numTests;
    double total, average;

    cout << fixed << showpoint << setprecision(1);

    cout << "This program averages test scores.\n";
    cout << "For how many students do you have scores? ";
    cin >> numStudents;

    cout << "How many test scores does each student have? ";
    cin >> numTests;

    for (int student = 1; student <= numStudents; student++)
    {
        total = 0;
        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Enter score " << test << " for ";
            cout << "student " << student << ": ";
            cin >> score;
            total += score;
        }
        average = total / numTests;
        cout << "The average score for student " << student;
        cout << " is " << average << ".\n\n";
    }

    return 0;
}
