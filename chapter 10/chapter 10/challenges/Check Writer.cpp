#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

// Hàm để đánh vần số tiền thành chuỗi
string spellNumber(double amount) {
    const string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string result;

    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    // Đánh vần số tiền đô la
    if (dollars > 0) {
        int thousands = dollars / 1000;
        if (thousands > 0) {
            result += ones[thousands] + " Thousand ";
            dollars -= thousands * 1000;
        }

        int hundreds = dollars / 100;
        if (hundreds > 0) {
            result += ones[hundreds] + " Hundred ";
            dollars -= hundreds * 100;
        }

        if (dollars > 0) {
            if (!result.empty()) {
                result += "and ";
            }
            if (dollars >= 10 && dollars < 20) {
                result += teens[dollars - 10];
                dollars = 0;  // Tránh đánh vần thừa số từ 10 đến 19
            } else {
                result += tens[dollars / 10] + " ";
                dollars %= 10;
            }

            if (dollars > 0) {
                result += ones[dollars] + " ";
            }
        }
        result += "Dollars ";
    }

    // Đánh vần số tiền xu
    if (cents > 0) {
        if (!result.empty()) {
            result += "and ";
        }
        result += to_string(cents) + " Cents";
    }

    return result;
}

int main() {
    cout << "Nhập ngày: ";
    string date;
    getline(cin, date);

    cout << "Nhập tên người nhận thanh toán: ";
    string recipient;
    getline(cin, recipient);

    double amount;
    do {
        cout << "Nhập số tiền (dưới 10,000 USD): ";
        cin >> amount;

        if (amount <= 0 || amount > 10000) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Số tiền không hợp lệ. Hãy nhập lại." << endl;
        }
    } while (amount <= 0 || amount > 10000);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Xóa bộ nhớ đệm

    // Hiển thị tấm séc mô phỏng
    cout << "Ngày: " << date << endl;
    cout << "Trả theo đơn đặt hàng của: " << recipient << " $" << fixed << setprecision(2) << amount << endl;
    cout << spellNumber(amount) << endl;

    return 0;
}
