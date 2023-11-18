#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
// Abstract base class
class Sap {
    protected:
    int sapID;
    double dienTich;

    public:
    virtual double tinhTienThueSap() = 0;
    virtual double tinhThueDoanhThu() = 0;
};

// Derived class for ThucPham saps
class ThucPham : public Sap {
    private:
    double tienSuDungDichLAnh;
    double doanhthu;
    public:
    ThucPham(int id, double dt, double tien, double doanhThu) {
        sapID = id;
        dienTich = dt;
        tienSuDungDichLAnh = tien;
        doanhthu = doanhThu;
    }
    double tinhTienThueSap() {
        return dienTich * 40000000;
    }
    double tinhThueDoanhThu() {
        return doanhthu * 0.05;
    }
};

// Derived class for QuanAo saps
class QuanAo : public Sap {
    private:
    double doanhthu;
    public:
    QuanAo(int id, double dt, double doanhThu) {
        sapID = id;
        dienTich = dt;
        doanhthu = doanhThu;
    }
    double tinhTienThueSap() {
        return dienTich * 40000000;
    }
    double tinhThueDoanhThu() {
        return doanhthu * 0.1;
    }

};

// Derived class of TrangSuc saps
class TrangSuc : public Sap {
    private:
    double doanhThu;
    public:
    TrangSuc(int id, double dt, double doanhthu) {
        sapID = id;
        dienTich = dt;
        doanhThu = doanhthu;
    }
    double tinhTienThueSap() {
        return dienTich * 40000000;
    }
    double tinhThueDoanhThu() {
        if(doanhThu < 100000000) {
            return doanhThu * 0.2;
        }else {
            return doanhThu * 0.3;
        }
    }
};
int main (){
    vector<Sap*> danhSachSap;
    // Nhập vài danh sách thong tin cac sap duoc thue 
    int n;
    cout << "Nhap so luong sap:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int loaiSap;
        cout << "Nhap loai sap (1 = Thuc pham, 2 = Quan ao, 3 = Trang suc):";
        cin >> loaiSap;
        int id;
        double dt;
        double doanhthu;

        cout << "Nhap so thu tu sap:";
        cin >> id;
        cout << "Nhap dien tich sap:";
        cin >> dt;
        cout << "Nhap doanh thu sap loai " << loaiSap << ": ";
        cin >> doanhthu;

        if(loaiSap == 1) {
            double tienSuDungDichLanh;
            cout << "Nhap so tien su dung dich lanh:";
            cin >> tienSuDungDichLanh;
            danhSachSap.push_back(new ThucPham(id, dt, tienSuDungDichLanh, doanhthu));
        }else if(loaiSap == 2) {
            danhSachSap.push_back(new QuanAo(id, dt, doanhthu));
        }else if (loaiSap == 3) {
            danhSachSap.push_back(new TrangSuc(id, dt, doanhthu));
        }
    }
    // Tính tổng số tiền các sap được thuê phải đống hàng năm
    double tongTien = 0;

    for (int i = 0; i < danhSachSap.size(); i++) {
        tongTien += danhSachSap[i]->tinhTienThueSap() + danhSachSap[i]->tinhThueDoanhThu();

    }
    cout << "Tong so tien cac sap duoc thue phai dong hang nam: " << fixed << setprecision(0) << tongTien << "dong" << endl;
    // Giải phóng bộ nhớ
    for (int i = 0; i < danhSachSap.size(); i++) {
        delete danhSachSap[i];
    }
    return 0;
}
