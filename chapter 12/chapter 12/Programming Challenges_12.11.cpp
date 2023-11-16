#include <iostream>
#include <fstream>
using namespace std;

// Structure to store division data
struct DivisionData {
    string divisionName;
    int quarter;
    double quarterlySales;
};

int main() {
    ofstream outFile("division_sales.txt");
    if (!outFile) {
        cerr << "Error: Unable to open the file for writing." << endl;
        return 1;
    }

    const int NUM_DIVISIONS = 4;
    const int NUM_QUARTERS = 4;

    DivisionData data;

    for (int division = 1; division <= NUM_DIVISIONS; division++) {
        for (int quarter = 1; quarter <= NUM_QUARTERS; quarter++) {
            // Input validation to ensure non-negative sales figures
            do {
                cout << "Enter sales for Division " << division << " (Quarter " << quarter << "): $";
                cin >> data.quarterlySales;

                if (data.quarterlySales < 0) {
                    cout << "Sales figure cannot be negative. Please enter a non-negative value." << endl;
                }
            } while (data.quarterlySales < 0);

            // Assign division name and quarter to the structure
            data.divisionName = (division == 1) ? "East" :
                                (division == 2) ? "West" :
                                (division == 3) ? "North" :
                                "South";
            data.quarter = quarter;

            // Write the data to the file
            outFile << "Division: " << data.divisionName << ", Quarter: " << data.quarter
                    << ", Sales: $" << data.quarterlySales << endl;
        }
    }

    outFile.close();
    cout << "Data has been written to division_sales.txt." << endl;

    return 0;
}
