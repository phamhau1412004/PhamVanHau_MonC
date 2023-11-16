#include <iostream>
#include <fstream>
#include <string>
#include <conio.h> // For _getch() function (Windows-specific)

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

    const int linesPerPage = 24;
    string line;
    int lineCount = 0;
    
    while (getline(inputFile, line)) {
        cout << line << endl;
        lineCount++;

        if (lineCount % linesPerPage == 0) {
            cout << "Press any key to continue...";
            _getch(); // Wait for a keypress (Windows-specific)
            cout << "\n";

            if (inputFile.eof()) {
                break; // End of file
            }
        }
    }

    inputFile.close();
    return 0;
}
