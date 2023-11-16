#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to check if the 2D array is a Lo Shu Magic Square
bool isLoShuMagicSquare(int square[SIZE][SIZE]) {
    int sumRow = 0;
    int sumCol = 0;
    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;
    int expectedSum = 15;  // The expected sum for a Lo Shu Magic Square

    // Calculate sums of the rows, columns, and diagonals
    for (int i = 0; i < SIZE; i++) {
        sumRow = 0;
        sumCol = 0;
        for (int j = 0; j < SIZE; j++) {
            sumRow += square[i][j];
            sumCol += square[j][i];
            if (i == j) {
                sumDiagonal1 += square[i][j];
            }
            if (i + j == SIZE - 1) {
                sumDiagonal2 += square[i][j];
            }
        }
        if (sumRow != expectedSum || sumCol != expectedSum) {
            return false;
        }
    }

    // Check if all sums are equal to the expected sum
    return sumDiagonal1 == expectedSum && sumDiagonal2 == expectedSum;
}

int main() {
    int square[SIZE][SIZE] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    if (isLoShuMagicSquare(square)) {
        cout << "The given 2D array is a Lo Shu Magic Square." << endl;
    } else {
        cout << "The given 2D array is not a Lo Shu Magic Square." << endl;
    }

    return 0;
}
