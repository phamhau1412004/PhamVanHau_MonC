#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Nhập dãy số có một chữ số (không có khoảng trắng): ";
    cin >> input;

    int total = 0;
    char maxDigit = '0';
    char minDigit = '9';

    for (char digit : input) {
        if (isdigit(digit)) {
            total += digit - '0';
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            if (digit < minDigit) {
                minDigit = digit;
            }
        }
    }

    cout << "Tổng của các số có một chữ số: " << total << endl;
    cout << "Chữ số lớn nhất: " << maxDigit << endl;
    cout << "Chữ số nhỏ nhất: " << minDigit << endl;

    return 0;
}
