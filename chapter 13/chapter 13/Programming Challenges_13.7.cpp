#include <iostream>
using namespace std;

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    // Constructor
    TestScores() {
        score1 = 0.0;
        score2 = 0.0;
        score3 = 0.0;
    }

    // Accessor functions
    double getScore1() {
        return score1;
    }

    double getScore2() {
        return score2;
    }

    double getScore3() {
        return score3;
    }

    // Mutator functions
    void setScore1(double s) {
        if (s >= 0) {
            score1 = s;
        }
    }

    void setScore2(double s) {
        if (s >= 0) {
            score2 = s;
        }
    }

    void setScore3(double s) {
        if (s >= 0) {
            score3 = s;
        }
    }

    // Member function to calculate the average
    double calculateAverage() {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    // Create an instance of the TestScores class
    TestScores test;

    // Prompt the user to enter three test scores
    double score1, score2, score3;

    cout << "Enter Test Score 1: ";
    cin >> score1;
    test.setScore1(score1);

    cout << "Enter Test Score 2: ";
    cin >> score2;
    test.setScore2(score2);

    cout << "Enter Test Score 3: ";
    cin >> score3;
    test.setScore3(score3);

    // Calculate and display the average of the test scores
    cout << "Average Test Score: " << test.calculateAverage() << endl;

    return 0;
}
