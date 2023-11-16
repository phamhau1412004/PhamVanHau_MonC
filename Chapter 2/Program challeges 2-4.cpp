#include <iostream>
using namespace std;

int main() {
    double mealCharge = 88.67;
    double taxRate = 0.0675;  // 6.75%
    double tipRate = 0.20;    // 20%

    double taxAmount = mealCharge * taxRate;
    double totalAfterTax = mealCharge + taxAmount;
    double tipAmount = totalAfterTax * tipRate;
    double totalBill = totalAfterTax + tipAmount;

    cout << "Meal cost: $" << mealCharge << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Tip amount: $" << tipAmount << endl;
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}
