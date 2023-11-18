#include <iostream>
#include <vector>
#include<iomanip>
#include<fstream>
using namespace std;

class BenhNhan {
private:
    int msbn;
    int ngayNhapVien;
    int ngayXuatVien;
    string loaiPhong;
    double phiKhamMoiNgay;

public:
    BenhNhan(int msbn, int ngayNhapVien, int ngayXuatVien, string loaiPhong, double phiKhamMoiNgay) {
        this->msbn = msbn;
        this->ngayNhapVien = ngayNhapVien;
        this->ngayXuatVien = ngayXuatVien;
        this->loaiPhong = loaiPhong;
        this->phiKhamMoiNgay = phiKhamMoiNgay;
    }
	void setMSBN(int res){
		msbn = res;
	}
    int getMSBN() const {
        return msbn;
    }

    int getNgayNhapVien() {
        return ngayNhapVien;
    }

    int getNgayXuatVien() {
        return ngayXuatVien;
    }

    string getLoaiPhong() {
        return loaiPhong;
    }

    double getPhiKhamMoiNgay() {
        return phiKhamMoiNgay;
    }

    double tinhVienPhi() {
        int soNgayNamVien = ngayXuatVien - ngayNhapVien;
        double donGiaPhong = 0;
        if (loaiPhong == "C") {
            donGiaPhong = 600000;
        } else if (loaiPhong == "B") {
            donGiaPhong = 900000;
        } else if (loaiPhong == "A") {
            donGiaPhong = 1400000;
        }
        if(donGiaPhong == 0){
        	return phiKhamMoiNgay; 	
		}
        return soNgayNamVien * (phiKhamMoiNgay + donGiaPhong);
    }
    void setNgayXuatVien(int ngay){
    	ngayXuatVien = ngay;
	}
	
	
};

class BenhVien {
private:
	int soBenhNhanNoiTru, soBenhNhanNgoaiTru;
public:
    vector<BenhNhan> danhSachBenhNhan;
    BenhVien() : soBenhNhanNoiTru(0), soBenhNhanNgoaiTru(0) {}

    void themBenhNhan(BenhNhan benhNhan) {
        danhSachBenhNhan.push_back(benhNhan);
        if (benhNhan.getNgayXuatVien() == -1) {
            soBenhNhanNoiTru++;
        } else {
            soBenhNhanNgoaiTru++;
        }
    }


    double tinhTongVienPhi() {
        double tongVienPhi = 0;

        for (int i = 0; i < danhSachBenhNhan.size(); i++) {
        	tongVienPhi += danhSachBenhNhan[i].tinhVienPhi();
        }

        return tongVienPhi;
    }
    
    
    void hienThiThongKe() {
        cout << "BANG THONG KE VIEN PHI\n";
        cout << setw(5) << "MSBN" << setw(15) << "Ngay Nhap Vien" << setw(15) << "Ngay Xuat Vien"
             << setw(10) << "Loai Phong" << setw(20) << "Phi Kham Moi Ngay" << setw(20) << "Vien Phi\n";
        cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;

        for (int i = 0; i < danhSachBenhNhan.size(); i++) {
            cout << setw(5) << danhSachBenhNhan[i].getMSBN()
                 << setw(15) << danhSachBenhNhan[i].getNgayNhapVien()
                 << setw(15) << (danhSachBenhNhan[i].getNgayXuatVien() == -1 ? "" : to_string(danhSachBenhNhan[i].getNgayXuatVien()))
                 << setw(10) << danhSachBenhNhan[i].getLoaiPhong()
                 << setw(20) << danhSachBenhNhan[i].getPhiKhamMoiNgay()
                 << setw(20) <<fixed << setprecision(0) << danhSachBenhNhan[i].tinhVienPhi() << endl;
        }

        cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;
        cout << setw(65) << "TONG VIEN PHI" << setw(15) << tinhTongVienPhi() << endl;
        cout << "So benh nhan noi tru: " << soBenhNhanNoiTru << endl;
    	cout << "So benh nhan ngoai tru: " << soBenhNhanNgoaiTru << endl;
    }
};

    

int main() {
    BenhVien benhVien;
    
    ifstream file("res.txt"); // tạo file .txt theo máy tính trong cùng mục lưu file bài này rồi chạy 

    if (file.is_open()) {
        int ngay, msbn;
        string hoatDong;
        double phiKham;

        while (file >> ngay >> msbn >> hoatDong) {
            if (hoatDong == "KB") {
                file >> phiKham;

                BenhNhan benhNhan(msbn, ngay, ngay, "", phiKham);
                benhVien.themBenhNhan(benhNhan);
            } else if (hoatDong == "NV") {
                double phiKhamMoiNgay;
                string loaiPhong;

                file >> phiKhamMoiNgay >> loaiPhong;

                BenhNhan benhNhan(msbn, ngay, -1, loaiPhong, phiKhamMoiNgay);
                benhVien.themBenhNhan(benhNhan);
            } else if (hoatDong == "XV") {
                for (int i = 0; i < benhVien.danhSachBenhNhan.size(); i++) {
                    if (benhVien.danhSachBenhNhan[i].getMSBN() == msbn && benhVien.danhSachBenhNhan[i].getNgayXuatVien() == -1) {
                        benhVien.danhSachBenhNhan[i].setNgayXuatVien(ngay);
                        benhVien.danhSachBenhNhan[i].getNgayXuatVien() == 0;
                        break;
                    }
                }
            } else if (hoatDong == "TKVP") {
                for (int i = 0; i < benhVien.danhSachBenhNhan.size(); i++) {
                    if (benhVien.danhSachBenhNhan[i].getMSBN() != msbn && benhVien.danhSachBenhNhan[i].getNgayXuatVien() == -1) {
                        benhVien.danhSachBenhNhan[i].setNgayXuatVien(ngay);
                        break;
                    }
                }
                break;
            }
        }

        file.close();

        benhVien.hienThiThongKe();
    } 
	else{
        cout << "Cannot open file." << endl;
    }

    return 0;
}
