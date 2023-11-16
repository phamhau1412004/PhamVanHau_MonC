#include <iostream>
using namespace std;

int main() {
    double costPrice = 14.95;
    double profitRate = 0.35;

    double sellingPrice = costPrice * (1 + profitRate);

    cout << "Selling price: $" << sellingPrice << endl;

    return 0;
}
