#include <iostream>
#include <algorithm>

// Hàm tính điểm trung bình
double tinhDiemTrungBinh(int* diem, int soLuongDiem) {
    int tongDiem = 0;
    for (int i = 0; i < soLuongDiem; i++) {
        tongDiem += diem[i];
    }
    return static_cast<double>(tongDiem) / soLuongDiem;
}

int main() {
    int soLuongDiem;
    do {
        std::cout << "Nhập số lượng điểm kiểm tra (không âm): ";
        std::cin >> soLuongDiem;
    } while (soLuongDiem <= 0);

    // Phân bổ động mảng để lưu trữ điểm kiểm tra
    int* diem = new int[soLuongDiem];

    std::cout << "Nhập điểm kiểm tra:" << std::endl;
    for (int i = 0; i < soLuongDiem; i++) {
        do {
            std::cout << "Điểm " << i + 1 << ": ";
            std::cin >> diem[i];
        } while (diem[i] < 0);
    }

    // Sắp xếp mảng theo thứ tự tăng dần
    std::sort(diem, diem + soLuongDiem);

    // Loại bỏ điểm kiểm tra thấp nhất
    if (soLuongDiem > 1) {
        diem[0] = diem[1];
    }

    // Tính điểm trung bình
    double diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    // Hiển thị danh sách điểm và điểm trung bình
    std::cout << "Danh sách điểm kiểm tra theo thứ tự tăng dần (điểm thấp nhất đã bị loại bỏ):" << std::endl;
    for (int i = 1; i < soLuongDiem; i++) {
        std::cout << "Điểm " << i << ": " << diem[i] << std::endl;
    }
    std::cout << "Điểm trung bình: " << diemTrungBinh << std::endl;

    // Giải phóng bộ nhớ của mảng động
    delete[] diem;

    return 0;
}
