#include <iostream>
#include <fstream>

using namespace std;

// Function to write an array to a binary file
void arrayToFile(const char* fileName, const int* arr, int size) {
    ofstream outputFile(fileName, ios::out | ios::binary);
    if (!outputFile) {
        cerr << "Error: Could not open the file for writing." << endl;
        return;
    }
    
    outputFile.write(reinterpret_cast<const char*>(arr), size * sizeof(int));
    outputFile.close();
}

// Function to read data from a binary file into an array
void fileToArray(const char* fileName, int* arr, int size) {
    ifstream inputFile(fileName, ios::in | ios::binary);
    if (!inputFile) {
        cerr << "Error: Could not open the file for reading." << endl;
        return;
    }
    
    inputFile.read(reinterpret_cast<char*>(arr), size * sizeof(int));
    inputFile.close();
}

int main() {
    const char* fileName = "data.dat";
    int data[] = {1, 2, 3, 4, 5}; // Sample array
    int size = sizeof(data) / sizeof(data[0]);

    // Write the array to a file
    arrayToFile(fileName, data, size);
    
    // Read the data from the file into an array
    int loadedData[size];
    fileToArray(fileName, loadedData, size);

    // Display the loaded array
    for (int i = 0; i < size; i++) {
        cout << loadedData[i] << " ";
    }
    cout << endl;

    return 0;
}
