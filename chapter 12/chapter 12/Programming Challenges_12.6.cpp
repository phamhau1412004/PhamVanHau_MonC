#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, searchStr;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    cout << "Enter the string to search for: ";
    cin >> searchStr;

    string line;
    int occurrenceCount = 0;

    while (getline(file, line)) {
        if (line.find(searchStr) != string::npos) {
            cout << line << endl;
            occurrenceCount++;
        }
    }

    if (occurrenceCount == 0) {
        cout << "The string '" << searchStr << "' was not found in the file." << endl;
    } else {
        cout << "Number of occurrences: " << occurrenceCount << endl;
    }

    return 0;
}
