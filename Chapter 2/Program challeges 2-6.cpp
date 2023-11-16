#include <iostream>
using namespace std;

int main() {
    double payAmount = 2200.0;
    int payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    cout << "Total annual pay: $" << annualPay << endl;

    return 0;
}
