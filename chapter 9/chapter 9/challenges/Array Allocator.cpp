#include <iostream>

// Hàm để cấp phát động một mảng số nguyên
int* capPhatMangSoNguyen(int kichThuoc) {
    int* arr = new int[kichThuoc]; // Cấp phát động một mảng số nguyên có kích thước đã chỉ định
    return arr; // Trả về con trỏ đến mảng đã cấp phát
}

int main() {
    int kichThuoc;
    
    std::cout << "Nhập kích thước của mảng số nguyên: ";
    std::cin >> kichThuoc;

    if (kichThuoc <= 0) {
        std::cout << "Kích thước mảng không hợp lệ. Kết thúc chương trình." << std::endl;
        return 1; // Thoát với mã lỗi
    }

    int* mangDong = capPhatMangSoNguyen(kichThuoc);

    // Kiểm tra xem việc cấp phát bộ nhớ có thành công không
    if (mangDong == nullptr) {
        std::cout << "Cấp phát bộ nhớ thất bại. Kết thúc chương trình." << std::endl;
        return 1; // Thoát với mã lỗi
    }

    // Bây giờ bạn có thể sử dụng mangDong giống như một mảng thông thường
    std::cout << "Các phần tử trong mảng động: ";
    for (int i = 0; i < kichThuoc; i++) {
        mangDong[i] = i * 10; // Gán một số giá trị cho mảng động
        std::cout << mangDong[i] << " ";
    }
    
    // Đừng quên giải phóng bộ nhớ khi đã hoàn thành việc sử dụng mảng động
    delete[] mangDong;

    return 0;
}
