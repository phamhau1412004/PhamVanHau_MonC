#include <iostream>
using namespace std;

int main() {
    double purchasePrice = 95.0;
    double stateSalesTaxRate = 0.04;  // 4%
    double countySalesTaxRate = 0.02;  // 2%

    double stateSalesTax = purchasePrice * stateSalesTaxRate;
    double countySalesTax = purchasePrice * countySalesTaxRate;
    double totalSalesTax = stateSalesTax + countySalesTax;

    cout << "The total sales tax on a $" << purchasePrice << " purchase is $" << totalSalesTax << endl;

    return 0;
}
