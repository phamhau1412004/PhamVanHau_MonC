#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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

    vector<string> lines;
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    int totalLines = lines.size();
    int numLinesToDisplay = min(totalLines, 10);

    if (numLinesToDisplay == totalLines) {
        cout << "The entire file has been displayed:" << endl;
    } else {
        cout << "Displaying the last 10 lines of the file:" << endl;
    }

    for (int i = totalLines - numLinesToDisplay; i < totalLines; i++) {
        cout << lines[i] << endl;
    }

    return 0;
}
