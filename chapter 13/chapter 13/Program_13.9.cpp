#include <iostream>
#include <iomanip>
#include "Sale.h" // Include the appropriate header file

using namespace std;

int main() {
    const double TAX_RATE = 0.06; // 6 percent sales tax rate
    double cost; // To hold the item cost

    // Get the cost of the item.
    cout << "Enter the cost of the item: ";
    cin >> cost;

    // Create a Sale object for this transaction.
    Sale itemSale(cost, TAX_RATE);

    // Set numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // Display the sales tax and total.
    cout << "The amount of sales tax is $" << itemSale.getTax() << endl;
    cout << "The total of the sale is $" << itemSale.getTotal() << endl;

    return 0;
}
