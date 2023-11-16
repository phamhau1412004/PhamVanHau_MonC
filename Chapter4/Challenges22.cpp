#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time

    int num1 = rand() % 1000;  // Generate a random number between 0 and 999
    int num2 = rand() % 1000;  // Generate another random number between 0 and 999

    cout << "Math Tutor - Addition\n";
    cout << num1 << "\n+ " << num2 << "\n";

    int answer;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == num1 + num2) {
        cout << "Congratulations! Your answer is correct." << endl;
    } else {
        cout << "Sorry, the correct answer is " << num1 + num2 << endl;
    }

    return 0;
}