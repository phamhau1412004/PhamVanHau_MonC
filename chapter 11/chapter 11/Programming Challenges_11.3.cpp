#include <iostream>
#include <string>
using namespace std;

// Structure to store division data
struct DivisionData {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Function to input sales data for a division
void inputDivisionData(DivisionData& division) {
    cout << "Enter data for " << division.divisionName << " division:\n";
    
    // Input sales data for each quarter
    do {
        cout << "First Quarter Sales: $";
        cin >> division.firstQuarterSales;
    } while (division.firstQuarterSales < 0);
    
    do {
        cout << "Second Quarter Sales: $";
        cin >> division.secondQuarterSales;
    } while (division.secondQuarterSales < 0);
    
    do {
        cout << "Third Quarter Sales: $";
        cin >> division.thirdQuarterSales;
    } while (division.thirdQuarterSales < 0);
    
    do {
        cout << "Fourth Quarter Sales: $";
        cin >> division.fourthQuarterSales;
    } while (division.fourthQuarterSales < 0);
    
    // Calculate total annual sales and average quarterly sales
    division.totalAnnualSales = division.firstQuarterSales +
                               division.secondQuarterSales +
                               division.thirdQuarterSales +
                               division.fourthQuarterSales;
    division.averageQuarterlySales = division.totalAnnualSales / 4;
}

// Function to display division data
void displayDivisionData(const DivisionData& division) {
    cout << "Division Name: " << division.divisionName << endl;
    cout << "First Quarter Sales: $" << division.firstQuarterSales << endl;
    cout << "Second Quarter Sales: $" << division.secondQuarterSales << endl;
    cout << "Third Quarter Sales: $" << division.thirdQuarterSales << endl;
    cout << "Fourth Quarter Sales: $" << division.fourthQuarterSales << endl;
    cout << "Total Annual Sales: $" << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: $" << division.averageQuarterlySales << endl;
    cout << "------------------------\n";
}

int main() {
    // Create variables for each division
    DivisionData east = {"East"};
    DivisionData west = {"West"};
    DivisionData north = {"North"};
    DivisionData south = {"South"};

    // Input data for each division
    inputDivisionData(east);
    inputDivisionData(west);
    inputDivisionData(north);
    inputDivisionData(south);

    // Display division data
    cout << "Division Data:" << endl;
    cout << "------------------------" << endl;
    displayDivisionData(east);
    displayDivisionData(west);
    displayDivisionData(north);
    displayDivisionData(south);

    return 0;
}
