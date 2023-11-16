#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool kiemTraMatKhau(const char *matkhau) {
    int length = strlen(matkhau);
    bool coChuHoa = false;
    bool coChuThuong = false;
    bool coChuSo = false;

    if (length < 6) {
        cout << "Mat khau phai co it nhat 6 ky tu." << endl;
        return false;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(matkhau[i])) {
            coChuHoa = true;
        } else if (islower(matkhau[i])) {
            coChuThuong = true;
        } else if (isdigit(matkhau[i])) {
            coChuSo = true;
        }
    }

    if (!coChuHoa || !coChuThuong || !coChuSo) {
        cout << "Mat khau phai co it nhat mot chu hoa, mot chu thuong, va mot chu so." << endl;
        return false;
    }

    return true;
}

int main() {
    char matkhau[100];

    cout << "Nhap mat khau: ";
    cin.getline(matkhau, 100);

    if (kiemTraMatKhau(matkhau)) {
        cout << "Mat khau hop le." << endl;
    } else {
        cout << "Mat khau khong hop le." << endl;
    }

    return 0;
}
