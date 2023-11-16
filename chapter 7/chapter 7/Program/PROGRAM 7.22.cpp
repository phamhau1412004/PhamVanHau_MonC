#include <iostream>
#include <iomanip>
using namespace std;

const int COLS = 4; // Number of columns in each array
const int TBL1_ROWS = 3; // Number of rows in table1
const int TBL2_ROWS = 4; // Number of rows in table2

void showArray(const int[][COLS], int); // Function prototype

int main()
{
    int table1[TBL1_ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int table2[TBL2_ROWS][COLS] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120},
        {130, 140, 150, 160}
    };

    cout << "The contents of table1 are:\n";
    showArray(table1, TBL1_ROWS);

    cout << "The contents of table2 are:\n";
    showArray(table2, TBL2_ROWS);

    return 0;
}

void showArray(const int numbers[][COLS], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            cout << setw(4) << numbers[x][y] << " ";
        }
        cout << endl;
    }
}
