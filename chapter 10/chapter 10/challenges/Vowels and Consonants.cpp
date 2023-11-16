#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Hàm đếm số nguyên âm trong chuỗi
int demNguyenAm(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

// Hàm đếm số phụ âm trong chuỗi
int demPhuAm(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char chuoi[100];
    char luaChon;

    do {
        cout << "Nhập một chuỗi: ";
        cin.getline(chuoi, sizeof(chuoi));

        cout << "Menu:\n";
        cout << "A) Đếm số nguyên âm trong chuỗi\n";
        cout << "B) Đếm số phụ âm trong chuỗi\n";
        cout << "C) Đếm cả nguyên âm và phụ âm trong chuỗi\n";
        cout << "D) Nhập chuỗi khác\n";
        cout << "E) Thoát chương trình\n";
        cout << "Chọn: ";
        cin >> luaChon;
        cin.ignore(); // Xoá ký tự xuống dòng

        switch (luaChon) {
            case 'A':
            case 'a':
                cout << "Số nguyên âm: " << demNguyenAm(chuoi) << endl;
                break;
            case 'B':
            case 'b':
                cout << "Số phụ âm: " << demPhuAm(chuoi) << endl;
                break;
            case 'C':
            case 'c':
                cout << "Số nguyên âm: " << demNguyenAm(chuoi) << endl;
                cout << "Số phụ âm: " << demPhuAm(chuoi) << endl;
                break;
            case 'D':
            case 'd':
                break;
            case 'E':
            case 'e':
                cout << "Thoát chương trình." << endl;
                break;
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng thử lại." << endl;
                break;
        }
    } while (luaChon != 'E' && luaChon != 'e');

    return 0;
}
