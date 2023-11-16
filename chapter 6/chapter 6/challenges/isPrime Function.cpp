#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int number) {
    if (number <= 1) {
        return false; // Số 1 và nhỏ hơn không phải là số nguyên tố
    }
    if (number <= 3) {
        return true; // Số 2 và 3 là số nguyên tố
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false; // Số chia hết cho 2 hoặc 3 không phải là số nguyên tố
    }

    // Kiểm tra các ước khác
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false; // Số chia hết cho một số trong dãy 5, 7, 11, 13, ... không phải là số nguyên tố
        }
    }

    return true; // Nếu không tìm thấy ước nào, thì số là số nguyên tố
}

int main() {
    int number;
    cout << "Nhập một số nguyên: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " là số nguyên tố." << endl;
    } else {
        cout << number << " không phải là số nguyên tố." << endl;
    }

    return 0;
}
