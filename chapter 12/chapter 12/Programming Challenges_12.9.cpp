#include <iostream>
#include <fstream>

using namespace std;

void encryptFile(const char* inputFile, const char* outputFile) {
    ifstream inFile(inputFile, ios::in);
    if (!inFile) {
        cerr << "Error: Could not open the input file." << endl;
        return;
    }

    ofstream outFile(outputFile, ios::out);
    if (!outFile) {
        cerr << "Error: Could not open the output file." << endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        // Encrypt the character by adding 10 to its ASCII code
        char encryptedChar = ch + 10;
        outFile.put(encryptedChar);
    }

    inFile.close();
    outFile.close();

    cout << "File encrypted successfully." << endl;
}

int main() {
    const char* inputFile = "input.txt";
    const char* outputFile = "encrypted.txt";

    encryptFile(inputFile, outputFile);

    return 0;
}
