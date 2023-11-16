#include <iostream>
using namespace std;

class NumberArray {
private:
    int size;
    double* numbers;

public:
    // Constructor to dynamically allocate the array
    NumberArray(int arraySize) {
        size = arraySize;
        numbers = new double[size];
    }

    // Destructor to free the dynamically allocated memory
    ~NumberArray() {
        delete[] numbers;
    }

    // Store a number in a specified element of the array
    void setElement(int index, double value) {
        if (index >= 0 && index < size) {
            numbers[index] = value;
        }
    }

    // Retrieve a number from a specified element of the array
    double getElement(int index) {
        if (index >= 0 && index < size) {
            return numbers[index];
        }
        return 0.0; // Default value if index is out of bounds
    }

    // Return the highest value stored in the array
    double getHighest() {
        double highest = numbers[0];
        for (int i = 1; i < size; i++) {
            if (numbers[i] > highest) {
                highest = numbers[i];
            }
        }
        return highest;
    }

    // Return the lowest value stored in the array
    double getLowest() {
        double lowest = numbers[0];
        for (int i = 1; i < size; i++) {
            if (numbers[i] < lowest) {
                lowest = numbers[i];
            }
        }
        return lowest;
    }

    // Return the average of all numbers stored in the array
    double getAverage() {
        double total = 0.0;
        for (int i = 0; i < size; i++) {
            total += numbers[i];
        }
        return total / size;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create a NumberArray object with the specified size
    NumberArray numArray(size);

    // Prompt the user to store numbers in the array
    for (int i = 0; i < size; i++) {
        double num;
        cout << "Enter a number for element " << i << ": ";
        cin >> num;
        numArray.setElement(i, num);
    }

    // Display the highest, lowest, and average values
    cout << "Highest value: " << numArray.getHighest() << endl;
    cout << "Lowest value: " << numArray.getLowest() << endl;
    cout << "Average: " << numArray.getAverage() << endl;

    return 0;
}
