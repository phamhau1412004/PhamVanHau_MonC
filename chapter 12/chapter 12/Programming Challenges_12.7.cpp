#include <iostream>
#include <fstream>
#include <cctype> // For the toupper and tolower functions

using namespace std;

int main() {
    string inputFileName, outputFileName;

    // Get the input and output file names
    cout << "Enter the input file name: ";
    cin >> inputFileName;
    cout << "Enter the output file name: ";
    cin >> outputFileName;

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error: Could not open the input file." << endl;
        return 1;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error: Could not open the output file." << endl;
        return 1;
    }

    bool capitalizeNext = true;
    char ch;

    while (inputFile.get(ch)) {
        if (capitalizeNext && isalpha(ch)) {
            ch = toupper(ch);
            capitalizeNext = false;
        } else if (ch == '.' || ch == '?' || ch == '!') {
            capitalizeNext = true;
        } else {
            ch = tolower(ch);
        }

        outputFile.put(ch);
    }

    cout << "File processing complete." << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
