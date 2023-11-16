#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // for system("pause")

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    int lineCount = 0;
    string line;

    while (getline(file, line)) {
        lineCount++;
        cout << lineCount << ":" << line << endl;

        if (lineCount % 24 == 0) {
            cout << "Press any key to continue..." << endl;
            system("pause"); // Wait for any key press
        }
    }

    cout << "End of file." << endl;

    return 0;
}
