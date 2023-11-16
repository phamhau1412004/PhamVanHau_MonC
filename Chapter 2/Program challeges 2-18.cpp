#include <iostream>
using namespace std;

int main() {
    int numShares = 750;
    double sharePrice = 35.00;
    double commissionRate = 0.02;

    double amountForStock = numShares * sharePrice;
    double commission = amountForStock * commissionRate;
    double totalAmount = amountForStock + commission;

    cout << "Amount paid for the stock alone: $" << amountForStock << endl;
    cout << "Amount of the commission: $" << commission << endl;
    cout << "Total amount paid: $" << totalAmount << endl;

    return 0;
}
