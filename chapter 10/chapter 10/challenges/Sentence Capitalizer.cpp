#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void vietHoaKyTuDauCau(const char *chuoi) {
    bool vietHoa = true; // Biến theo dõi viết hoa ký tự
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == '.' || chuoi[i] == '!' || chuoi[i] == '?') {
            vietHoa = true; // Gặp dấu câu, cần viết hoa ký tự tiếp theo
        } else if (vietHoa && isalpha(chuoi[i])) {
            cout << (char)toupper(chuoi[i]); // Viết hoa ký tự đầu của từ
            vietHoa = false;
        } else {
            cout << chuoi[i];
        }
    }
}

int main() {
    char chuoi[1000];

    cout << "Nhập một chuỗi: ";
    cin.getline(chuoi, 1000);

    vietHoaKyTuDauCau(chuoi);

    return 0;
}
