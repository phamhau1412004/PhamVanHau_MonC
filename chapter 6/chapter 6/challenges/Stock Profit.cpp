#include <iostream>

// Hàm tính lợi nhuận hoặc lỗ từ việc bán cổ phiếu
double tinhLoiNhuan(int soLuongCoPhieu, double giaMua, double hoaHongMua, double giaBan, double hoaHongBan) {
    double loiNhuan = (soLuongCoPhieu * giaBan - hoaHongBan) - (soLuongCoPhieu * giaMua + hoaHongMua);
    return loiNhuan;
}

int main() {
    int soLuongCoPhieu;
    double giaMua, hoaHongMua, giaBan, hoaHongBan;

    // Nhập thông tin từ người dùng
    std::cout << "Nhập số lượng cổ phiếu: ";
    std::cin >> soLuongCoPhieu;
    std::cout << "Nhập giá mua mỗi cổ phiếu: $";
    std::cin >> giaMua;
    std::cout << "Nhập hoa hồng mua hàng được trả: $";
    std::cin >> hoaHongMua;
    std::cout << "Nhập giá bán mỗi cổ phiếu: $";
    std::cin >> giaBan;
    std::cout << "Nhập hoa hồng bán hàng được trả: $";
    std::cin >> hoaHongBan;

    // Gọi hàm để tính lợi nhuận hoặc lỗ
    double ketQua = tinhLoiNhuan(soLuongCoPhieu, giaMua, hoaHongMua, giaBan, hoaHongBan);

    // Hiển thị kết quả
    if (ketQua > 0) {
        std::cout << "Lợi nhuận: $" << ketQua << std::endl;
    } else if (ketQua < 0) {
        std::cout << "Lỗ: $" << -ketQua << std::endl;
    } else {
        std::cout << "Không có lợi nhuận hoặc lỗ." << std::endl;
    }

    return 0;
}
