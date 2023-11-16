#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Structure to store student data
struct Student {
    string name;
    int idnum;
    int* tests;
    double average;
    char grade;
};

// Function to calculate the course grade based on average test score
char calculateGrade(double average) {
    if (average >= 91) return 'A';
    else if (average >= 81) return 'B';
    else if (average >= 71) return 'C';
    else if (average >= 61) return 'D';
    else return 'F';
}

int main() {
    int numStudents, numTests;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of tests: ";
    cin >> numTests;

    // Dynamically allocate an array of Student structures
    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        students[i].tests = new int[numTests];
        cout << "Enter the student's name: ";
        cin.ignore(); // Clear the newline character from previous input
        getline(cin, students[i].name);
        cout << "Enter the student's ID number: ";
        cin >> students[i].idnum;

        double total = 0.0;
        for (int j = 0; j < numTests; j++) {
            cout << "Enter test score " << j + 1 << " for " << students[i].name << ": ";
            cin >> students[i].tests[j];
            while (students[i].tests[j] < 0) {
                cout << "Test scores cannot be negative. Enter a non-negative score: ";
                cin >> students[i].tests[j];
            }
            total += students[i].tests[j];
        }

        // Calculate the average test score
        students[i].average = total / numTests;

        // Calculate the course grade
        students[i].grade = calculateGrade(students[i].average);
    }

    // Display the table
    cout << "\nStudent Data:\n";
    cout << setw(15) << "Name" << setw(15) << "ID Number" << setw(15) << "Average Score" << setw(15) << "Grade" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << setw(15) << students[i].name << setw(15) << students[i].idnum << setw(15) << students[i].average << setw(15) << students[i].grade << endl;
    }

    // Deallocate memory
    for (int i = 0; i < numStudents; i++) {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}
