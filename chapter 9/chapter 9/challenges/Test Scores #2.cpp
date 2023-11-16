#include <iostream>
#include <algorithm>
#include <string>

struct HocSinh {
    std::string ten;
    int diem;
};

// Hàm so sánh để sắp xếp
bool soSanhHocSinh(const HocSinh& hs1, const HocSinh& hs2) {
    return hs1.diem < hs2.diem;
}

// Hàm tính điểm trung bình
double tinhDiemTrungBinh(HocSinh* hocSinh, int soLuongDiem) {
    int tongDiem = 0;
    for (int i = 0; i < soLuongDiem; i++) {
        tongDiem += hocSinh[i].diem;
    }
    return static_cast<double>(tongDiem) / soLuongDiem;
}

int main() {
    int soLuongDiem;
    do {
        std::cout << "Nhập số lượng điểm kiểm tra (không âm): ";
        std::cin >> soLuongDiem;
    } while (soLuongDiem <= 0);

    HocSinh* danhSachHocSinh = new HocSinh[soLuongDiem];

    std::cout << "Nhập điểm kiểm tra và tên học sinh:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        do {
            std::cout << "Tên học sinh " << i + 1 << ": ";
            std::cin >> danhSachHocSinh[i].ten;
            std::cout << "Điểm " << i + 1 << ": ";
            std::cin >> danhSachHocSinh[i].diem;
        } while (danhSachHocSinh[i].diem < 0);
    }

    // Sắp xếp danh sách theo thứ tự tăng dần
    std::sort(danhSachHocSinh, danhSachHocSinh + soLuongDiem, soSanhHocSinh);

    // Tính điểm trung bình
    double diemTrungBinh = tinhDiemTrungBinh(danhSachHocSinh, soLuongDiem);

    // Hiển thị danh sách điểm và điểm trung bình
    std::cout << "Danh sách điểm kiểm tra theo thứ tự tăng dần:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        std::cout << "Tên: " << danhSachHocSinh[i].ten << ", Điểm: " << danhSachHocSinh[i].diem << std::endl;
    }
    std::cout << "Điểm trung bình: " << diemTrungBinh << std::endl;

    // Giải phóng bộ nhớ của mảng động
    delete[] danhSachHocSinh;

    return 0;
}
