#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void demSoTuVaChuCaiTrungBinh(const char *chuoi, int &soTu, double &chuCaiTrungBinh) {
    int demTu = 0;
    int demChuCai = 0;
    bool dangLaTu = false;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            if (!dangLaTu) {
                demTu++;
                dangLaTu = true;
            }
            demChuCai++;
        } else {
            dangLaTu = false;
        }
    }

    soTu = demTu;
    chuCaiTrungBinh = static_cast<double>(demChuCai) / demTu;
}

int main() {
    char chuoi[100];

    cout << "Nhập một chuỗi: ";
    cin.getline(chuoi, 100);

    int soTu;
    double chuCaiTrungBinh;

    demSoTuVaChuCaiTrungBinh(chuoi, soTu, chuCaiTrungBinh);

    cout << "Số từ trong chuỗi: " << soTu << endl;
    cout << "Số chữ cái trung bình trong mỗi từ: " << chuCaiTrungBinh << endl;

    return 0;
}
