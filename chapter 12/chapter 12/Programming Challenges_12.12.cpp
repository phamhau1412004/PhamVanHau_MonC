#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct DivisionData {
    string divisionName;
    int quarter;
    double quarterlySales;
};

const int NUM_DIVISIONS = 4;
const int NUM_QUARTERS = 4;

int main() {
    ifstream inFile("division_sales.txt");

    if (!inFile) {
        cerr << "Error: Unable to open the file for reading." << endl;
        return 1;
    }

    DivisionData data;
    double quarterlySalesTotal[NUM_QUARTERS] = {0};
    double yearlySalesTotal[NUM_DIVISIONS] = {0};
    double yearlyCorporateSales = 0;
    double highestQuarterlySales = 0;
    double lowestQuarterlySales = numeric_limits<double>::max();
    int highestQuarter = 0;
    int lowestQuarter = 0;

    while (inFile >> data.divisionName >> data.quarter >> data.quarterlySales) {
        // Accumulate total corporate sales for each quarter
        quarterlySalesTotal[data.quarter - 1] += data.quarterlySales;

        // Accumulate total yearly sales for each division
        yearlySalesTotal[data.quarter - 1] += data.quarterlySales;

        // Accumulate total yearly corporate sales
        yearlyCorporateSales += data.quarterlySales;

        // Find the highest and lowest quarterly sales
        if (data.quarterlySales > highestQuarterlySales) {
            highestQuarterlySales = data.quarterlySales;
            highestQuarter = data.quarter;
        }
        if (data.quarterlySales < lowestQuarterlySales) {
            lowestQuarterlySales = data.quarterlySales;
            lowestQuarter = data.quarter;
        }
    }

    // Display the results
    for (int i = 0; i < NUM_QUARTERS; i++) {
        cout << "Total corporate sales for Quarter " << i + 1 << ": $" << quarterlySalesTotal[i] << endl;
    }

    for (int i = 0; i < NUM_DIVISIONS; i++) {
        cout << "Total yearly sales for Division " << data.divisionName << ": $" << yearlySalesTotal[i] << endl;
    }

    cout << "Total yearly corporate sales: $" << yearlyCorporateSales << endl;

    cout << "Average quarterly sales for the divisions:" << endl;
    for (int i = 0; i < NUM_DIVISIONS; i++) {
        double averageSales = yearlySalesTotal[i] / NUM_QUARTERS;
        cout << "Division " << i + 1 << ": $" << averageSales << endl;
    }

    cout << "Highest quarterly sales: Quarter " << highestQuarter << " with $" << highestQuarterlySales << endl;
    cout << "Lowest quarterly sales: Quarter " << lowestQuarter << " with $" << lowestQuarterlySales << endl;

    inFile.close();

    return 0;
}
