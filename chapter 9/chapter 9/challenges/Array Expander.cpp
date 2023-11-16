#include <iostream>

// Hàm để tạo mảng mới với kích thước gấp đôi và sao chép nội dung mảng đối số
int* doubleSizeArray(const int arr[], int size) {
    int newSize = size * 2;  // Kích thước mới gấp đôi kích thước mảng đối số
    int* newArray = new int[newSize];  // Tạo mảng mới với kích thước mới

    for (int i = 0; i < newSize; i++) {
        if (i < size) {
            newArray[i] = arr[i];  // Sao chép nội dung từ mảng đối số
        } else {
            newArray[i] = 0;  // Khởi tạo các phần tử không được sử dụng với giá trị 0
        }
    }

    return newArray;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* newArray = doubleSizeArray(arr, size);

    std::cout << "Mảng gốc: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mảng mới: ";
    for (int i = 0; i < size * 2; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] newArray;  // Giải phóng bộ nhớ động

    return 0;
}
