#include <iostream>
#include <fstream>

using namespace std;

void decryptFile(const char* inputFile, const char* outputFile) {
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
        // Decrypt the character by subtracting 10 from its ASCII code
        char decryptedChar = ch - 10;
        outFile.put(decryptedChar);
    }

    inFile.close();
    outFile.close();

    cout << "File decrypted successfully." << endl;
}

int main() {
    const char* inputFile = "encrypted.txt";
    const char* outputFile = "decrypted.txt";

    decryptFile(inputFile, outputFile);

    return 0;
}
