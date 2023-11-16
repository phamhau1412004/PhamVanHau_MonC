#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính giá trị hiện tại (P)
double PresentValue(double futureValue, double annualInterestRate, int numberOfYears) {
    double rate = annualInterestRate / 100.0; // Chuyển lãi suất thành dạng phần trăm
    double presentValue = futureValue / pow(1 + rate, numberOfYears);
    return presentValue;
}

int main() {
    double futureValue = 10000.0; // Giá trị tương lai mong muốn
    double annualInterestRate;
    int numberOfYears;

    cout << "Nhập lãi suất hàng năm (%): ";
    cin >> annualInterestRate;
    cout << "Nhập số năm: ";
    cin >> numberOfYears;

    // Tính giá trị hiện tại và hiển thị
    double presentValue = PresentValue(futureValue, annualInterestRate, numberOfYears);
    cout << "Số tiền bạn cần đặt cọc ngay hôm nay: $" << presentValue << endl;

    return 0;
}
