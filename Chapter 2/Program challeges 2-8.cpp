#include <iostream>
using namespace std;

int main() {
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    double salesTaxRate = 0.07;  // 7%

    double subtotal = item1 + item2 + item3 + item4 + item5;
    double salesTax = subtotal * salesTaxRate;
    double total = subtotal + salesTax;

    cout << "Price of item 1 = $" << item1 << endl;
    cout << "Price of item 2 = $" << item2 << endl;
    cout << "Price of item 3 = $" << item3 << endl;
    cout << "Price of item 4 = $" << item4 << endl;
    cout << "Price of item 5 = $" << item5 << endl;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
