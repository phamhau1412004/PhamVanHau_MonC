#include <iostream>
#include <string>
using namespace std;

int main() {
    string ngayNhap;
    string thang, ngay, nam;

    cout << "Nhap ngay (mm/dd/yyyy): ";
    cin >> ngayNhap;

    // Tách chuỗi thành tháng, ngày và năm bằng cách tìm dấu '/'
    size_t viTri1 = ngayNhap.find('/');
    size_t viTri2 = ngayNhap.rfind('/');

    if (viTri1 != string::npos && viTri2 != string::npos) {
        thang = ngayNhap.substr(0, viTri1);
        ngay = ngayNhap.substr(viTri1 + 1, viTri2 - viTri1 - 1);
        nam = ngayNhap.substr(viTri2 + 1);

        // Chuyển đổi tháng từ chuỗi sang số
        int thangSo = stoi(thang);

        // Mảng tên tháng
        string tenThang[] = {"", "Tháng 1", "Tháng 2", "Tháng 3", "Tháng 4", "Tháng 5", "Tháng 6", "Tháng 7", "Tháng 8", "Tháng 9", "Tháng 10", "Tháng 11", "Tháng 12"};

        // Kiểm tra tháng hợp lệ
        if (thangSo >= 1 && thangSo <= 12) {
            cout << "Ngay: " << tenThang[thangSo] << " " << ngay << " nam " << nam << endl;
        } else {
            cout << "Ngay khong hop le." << endl;
        }
    } else {
        cout << "Dinh dang ngay khong hop le." << endl;
    }

    return 0;
}
