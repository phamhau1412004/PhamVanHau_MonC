#include <iostream>

// Hàm tính lợi nhuận hoặc lỗ từ việc bán cổ phiếu
double tinhLoiNhuan(int soLuongCoPhieu, double giaMua, double hoaHongMua, double giaBan, double hoaHongBan) {
    double loiNhuan = (soLuongCoPhieu * giaBan - hoaHongBan) - (soLuongCoPhieu * giaMua + hoaHongMua);
    return loiNhuan;
}

int main() {
    int soLuongGiaoDich;
    double tongLoiNhuan = 0.0;

    // Nhập số lượng giao dịch
    std::cout << "Nhập số lượng giao dịch: ";
    std::cin >> soLuongGiaoDich;

    // Lặp qua từng giao dịch và tính tổng lợi nhuận hoặc lỗ
    for (int i = 1; i <= soLuongGiaoDich; i++) {
        int soLuongCoPhieu;
        double giaMua, hoaHongMua, giaBan, hoaHongBan;

        // Nhập thông tin từng giao dịch
        std::cout << "Nhập số lượng cổ phiếu (giao dịch #" << i << "): ";
        std::cin >> soLuongCoPhieu;
        std::cout << "Nhập giá mua mỗi cổ phiếu (giao dịch #" << i << "): $";
        std::cin >> giaMua;
        std::cout << "Nhập hoa hồng mua hàng được trả (giao dịch #" << i << "): $";
        std::cin >> hoaHongMua;
        std::cout << "Nhập giá bán mỗi cổ phiếu (giao dịch #" << i << "): $";
        std::cin >> giaBan;
        std::cout << "Nhập hoa hồng bán hàng được trả (giao dịch #" << i << "): $";
        std::cin >> hoaHongBan;

        // Gọi hàm để tính lợi nhuận hoặc lỗ từ giao dịch hiện tại
        double loiNhuanGiaoDich = tinhLoiNhuan(soLuongCoPhieu, giaMua, hoaHongMua, giaBan, hoaHongBan);

        // Cộng lợi nhuận hoặc lỗ từ giao dịch hiện tại vào tổng lợi nhuận
        tongLoiNhuan += loiNhuanGiaoDich;
    }

    // Hiển thị tổng lợi nhuận hoặc lỗ sau tất cả các giao dịch
    if (tongLoiNhuan > 0) {
        std::cout << "Tổng lợi nhuận: $" << tongLoiNhuan << std::endl;
    } else if (tongLoiNhuan < 0) {
        std::cout << "Tổng lỗ: $" << -tongLoiNhuan << std::endl;
    } else {
        std::cout << "Không có tổng lợi nhuận hoặc lỗ." << std::endl;
    }

    return 0;
}
