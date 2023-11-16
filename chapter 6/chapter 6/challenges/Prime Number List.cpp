#include <iostream>
#include <fstream>

bool isPrime(int number) {
    // Hàm isPrime của bạn (đã được định nghĩa trong câu trả lời trước)
}

int main() {
    std::ofstream outputFile("so_nguyen_to.txt");

    if (!outputFile) {
        std::cerr << "Lỗi: Không thể mở tệp tin đầu ra." << std::endl;
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            outputFile << i << " ";
        }
    }

    outputFile.close();

    std::cout << "Danh sách các số nguyên tố từ 1 đến 100 đã được lưu vào tệp tin so_nguyen_to.txt" << std::endl;

    return 0;
}
