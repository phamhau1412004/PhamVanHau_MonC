#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to read and display each line in the file (joke file)
void readAndDisplayJoke(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Could not open the joke file." << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();
}

// Function to display only the last line of the file (punch line file)
void displayPunchLine(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Could not open the punch line file." << endl;
        return;
    }

    string line;
    string lastLine;
    while (getline(inputFile, line)) {
        lastLine = line;
    }
    cout << "Punch Line: " << lastLine << endl;
    inputFile.close();
}

int main() {
    const string jokeFilename = "joke.txt";
    const string punchLineFilename = "punchline.txt";

    cout << "Joke:" << endl;
    readAndDisplayJoke(jokeFilename);

    cout << "\n";

    cout << "Punch Line:" << endl;
    displayPunchLine(punchLineFilename);

    return 0;
}
