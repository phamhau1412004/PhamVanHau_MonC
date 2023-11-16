#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    ifstream inputFile("text.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open the file for reading." << endl;
        return 1;
    }

    string line;
    vector<string> sentences;
    int totalWords = 0;
    int sentenceCount = 0;

    while (getline(inputFile, line)) {
        sentences.push_back(line);
        istringstream iss(line);
        string word;
        while (iss >> word) {
            totalWords++;
        }
        sentenceCount++;
    }

    inputFile.close();

    if (sentenceCount > 0) {
        double averageWords = static_cast<double>(totalWords) / sentenceCount;
        cout << "Total sentences: " << sentenceCount << endl;
        cout << "Total words: " << totalWords << endl;
        cout << "Average words per sentence: " << averageWords << endl;
    } else {
        cout << "No sentences found in the file." << endl;
    }

    return 0;
}
