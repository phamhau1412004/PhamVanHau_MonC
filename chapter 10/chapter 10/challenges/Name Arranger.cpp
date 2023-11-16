#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ho[30];
    char tenDem[30];
    char ten[30];
    char hoTenSapXep[100];

    cout << "Nhập họ của bạn: ";
    cin.getline(ho, sizeof(ho));

    cout << "Nhập tên đệm của bạn: ";
    cin.getline(tenDem, sizeof(tenDem));

    cout << "Nhập tên của bạn: ";
    cin.getline(ten, sizeof(ten));

    strcpy(hoTenSapXep, ho);
    strcat(hoTenSapXep, ", ");
    strcat(hoTenSapXep, ten);
    strcat(hoTenSapXep, " ");
    strcat(hoTenSapXep, tenDem);

    cout << "Họ và tên đã được sắp xếp: " << hoTenSapXep << endl;

    return 0;
}
