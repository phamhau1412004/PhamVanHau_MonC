#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void chuyenThanhHoa(char *chuoi) {
    int length = strlen(chuoi);
    for (int i = 0; i < length; i++) {
        if (islower(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]);
        }
    }
}

void chuyenThanhThuong(char *chuoi) {
    int length = strlen(chuoi);
    for (int i = 0; i < length; i++) {
        if (isupper(chuoi[i])) {
            chuoi[i] = tolower(chuoi[i]);
        }
    }
}

void daoNguoc(char *chuoi) {
    int length = strlen(chuoi);
    for (int i = 0; i < length; i++) {
        if (islower(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]);
        } else if (isupper(chuoi[i])) {
            chuoi[i] = tolower(chuoi[i]);
        }
    }
}

int main() {
    char chuoi[] = "Hello World";

    cout << "Chuoi ban dau: " << chuoi << endl;

    chuyenThanhHoa(chuoi);
    cout << "Chuoi chuyen thanh chu hoa: " << chuoi << endl;

    chuyenThanhThuong(chuoi);
    cout << "Chuoi chuyen thanh chu thuong: " << chuoi << endl;

    daoNguoc(chuoi);
    cout << "Chuoi dao nguoc: " << chuoi << endl;

    return 0;
}
