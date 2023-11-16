#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính giá trị tương lai (F)
double FutureValue(double presentValue, double monthlyInterestRate, int numberOfMonths) {
    double futureValue = presentValue * pow(1 + monthlyInterestRate, numberOfMonths);
    return futureValue;
}

int main() {
    double presentValue;
    double annualInterestRate;
    int numberOfMonths;

    cout << "Nhập giá trị hiện tại của tài khoản hàng tháng: $";
    cin >> presentValue;
    cout << "Nhập lãi suất hàng tháng (%): ";
    cin >> annualInterestRate;
    cout << "Nhập số tháng: ";
    cin >> numberOfMonths;

    double monthlyInterestRate = annualInterestRate / 100 / 12; // Chuyển lãi suất hàng tháng thành dạng phần trăm

    // Tính giá trị tương lai và hiển thị
    double futureValue = FutureValue(presentValue, monthlyInterestRate, numberOfMonths);
    cout << "Giá trị tương lai của tài khoản sau " << numberOfMonths << " tháng là: $" << futureValue << endl;

    return 0;
}
