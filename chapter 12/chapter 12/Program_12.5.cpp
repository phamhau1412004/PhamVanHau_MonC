#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
bool openFileIn(fstream &, string);
void showContents(fstream &);

int main() {
    fstream dataFile;

    if (openFileIn(dataFile, "demofile.txt")) {
        cout << "File opened successfully.\n";
        cout << "Now reading data from the file.\n\n";
        showContents(dataFile);
        dataFile.close();
        cout << "\nDone.\n";
    }
    else
        cout << "File open error!" << endl;

    return 0;
}

// Definition of function openFileIn.
bool openFileIn(fstream &file, string name) {
    file.open(name, ios::in);
    if (file.fail())
        return false;
    else
        return true;
}

// Definition of function showContents.
void showContents(fstream &file) {
    string line;

    while (file >> line) {
        cout << line << endl;
    }
}
