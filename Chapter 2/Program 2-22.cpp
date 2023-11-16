#include <iostream>
using namespace std;

int main() {
    // Bi?n ?? l?u l??ng l??ng hàng tháng và s? ti?n ?óng góp.
    double monthlyPay = 6000.0, contribution;

    // Tính và hi?n th? s? ti?n ?óng góp 5%.
    contribution = monthlyPay * 0.05;
    cout << "5 percent is $" << contribution << " per month.\n";

    // Tính và hi?n th? s? ti?n ?óng góp 7%.
    contribution = monthlyPay * 0.07;
    cout << "7 percent is $" << contribution << " per month.\n";

    // Tính và hi?n th? s? ti?n ?óng góp 10%.
    contribution = monthlyPay * 0.1;
    cout << "10 percent is $" << contribution << " per month.\n";

    return 0;
}
