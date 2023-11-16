#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    ifstream inputFile;

    cout << "Enter the name of the file: ";
    cin >> filename;

    inputFile.open(filename);

    if (!inputFile) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    while (lineCount < 10 && getline(inputFile, line)) {
        cout << line << endl;
        lineCount++;
    }

    if (lineCount < 10) {
        cout << "The entire file has been displayed." << endl;
    }

    inputFile.close();
    return 0;
}
