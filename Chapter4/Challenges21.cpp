#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double RETAIL_PRICE = 99.0;
    int quantity;
    double totalCost;

    cout << "Enter the number of units sold: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Please enter a valid quantity greater than 0." << endl;
    } else {
        if (quantity >= 10 && quantity <= 19) {
            totalCost = quantity * RETAIL_PRICE * 0.8;
        } else if (quantity >= 20 && quantity <= 49) {
            totalCost = quantity * RETAIL_PRICE * 0.7;
        } else if (quantity >= 50 && quantity <= 99) {
            totalCost = quantity * RETAIL_PRICE * 0.6;
        } else if (quantity >= 100) {
            totalCost = quantity * RETAIL_PRICE * 0.5;
        } else {
            totalCost = quantity * RETAIL_PRICE;
        }

        cout << fixed << showpoint << setprecision(2);
        cout << "Total cost of the purchase: $" << totalCost << endl;
    }

    return 0;
}