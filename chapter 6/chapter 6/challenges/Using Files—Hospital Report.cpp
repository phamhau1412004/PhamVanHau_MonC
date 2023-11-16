#include <iostream>
#include <fstream>
using namespace std;

// Hàm tính tổng chi phí cho bệnh nhân nhập viện
double tinhTongChiPhiNhapVien(int soNgay, double giaMoiNgay, double chiPhiThuoc, double chiPhiDichVu) {
    return (soNgay * giaMoiNgay) + chiPhiThuoc + chiPhiDichVu;
}

// Hàm tính tổng chi phí cho bệnh nhân ngoại trú
double tinhTongChiPhiNgoaiTru(double chiPhiDichVu, double chiPhiThuoc) {
    return chiPhiDichVu + chiPhiThuoc;
}

int main() {
    ofstream outFile("bao_cao_benh_vien.txt");
    if (!outFile) {
        cerr << "Lỗi khi mở tệp tin." << endl;
        return 1;
    }

    char loaiBenhNhan;
    cout << "Loại bệnh nhân (I cho bệnh nhân nhập viện, O cho bệnh nhân ngoại trú): ";
    cin >> loaiBenhNhan;

    if (loaiBenhNhan != 'I' && loaiBenhNhan != 'i' && loaiBenhNhan != 'O' && loaiBenhNhan != 'o') {
        cout << "Loại bệnh nhân không hợp lệ." << endl;
        return 1;
    }

    double tongChiPhi;

    if (loaiBenhNhan == 'I' || loaiBenhNhan == 'i') {
        int soNgay;
        double giaMoiNgay, chiPhiThuoc, chiPhiDichVu;

        cout << "Số ngày nằm viện: ";
        cin >> soNgay;

        cout << "Giá mỗi ngày: $";
        cin >> giaMoiNgay;

        cout << "Chi phí thuốc: $";
        cin >> chiPhiThuoc;

        cout << "Chi phí dịch vụ bệnh viện: $";
        cin >> chiPhiDichVu;

        if (soNgay < 0 || giaMoiNgay < 0 || chiPhiThuoc < 0 || chiPhiDichVu < 0) {
            cout << "Dữ liệu không hợp lệ. Không chấp nhận số âm." << endl;
            return 1;
        }

        tongChiPhi = tinhTongChiPhiNhapVien(soNgay, giaMoiNgay, chiPhiThuoc, chiPhiDichVu);
    } else {
        double chiPhiThuoc, chiPhiDichVu;

        cout << "Chi phí thuốc: $";
        cin >> chiPhiThuoc;

        cout << "Chi phí dịch vụ bệnh viện: $";
        cin >> chiPhiDichVu;

        if (chiPhiThuoc < 0 || chiPhiDichVu < 0) {
            cout << "Dữ liệu không hợp lệ. Không chấp nhận số âm." << endl;
            return 1;
        }

        tongChiPhi = tinhTongChiPhiNgoaiTru(chiPhiThuoc, chiPhiDichVu);
    }

    cout << "Tổng chi phí: $" << tongChiPhi << endl;

    // Lưu báo cáo vào tệp tin
    outFile << "Loại bệnh nhân: " << ((loaiBenhNhan == 'I' || loaiBenhNhan == 'i') ? "Bệnh nhân nhập viện" : "Bệnh nhân ngoại trú") << endl;
    outFile << "Tổng chi phí: $" << tongChiPhi << endl;
    outFile.close();

    return 0;
}
