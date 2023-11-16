#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Hàm mô phỏng việc tung đồng xu
void coinToss() {
    int random = rand() % 2 + 1;
    if (random == 1) {
        cout << "Đầu" << endl;
    } else {
        cout << "Đuôi" << endl;
    }
}

int main() {
    // Khởi tạo bộ ngẫu nhiên
    srand(static_cast<unsigned>(time(0)));

    int numTosses;
    cout << "Nhập số lần tung đồng xu: ";
    cin >> numTosses;

    cout << "Kết quả tung đồng xu " << numTosses << " lần:" << endl;
    for (int i = 0; i < numTosses; i++) {
        cout << "Lần " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}
