#include <iostream>
#include <cstring>
using namespace std;

void daoNguocChuoi(char *chuoi) {
    int doDai = strlen(chuoi);
    for (int i = 0; i < doDai / 2; i++) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[doDai - 1 - i];
        chuoi[doDai - 1 - i] = temp;
    }
}

int main() {
    char chuoi[100];
    
    cout << "Nhập một chuỗi: ";
    cin.getline(chuoi, 100);
    
    daoNguocChuoi(chuoi);
    
    cout << "Chuỗi sau khi đảo ngược: " << chuoi << endl;
    
    return 0;
}
1