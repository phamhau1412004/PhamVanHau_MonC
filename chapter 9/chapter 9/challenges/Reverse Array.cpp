#include <iostream>

// Hàm để tạo bản sao của mảng với các phần tử đảo ngược
int* reverseCopyArray(const int arr[], int size) {
    int* reversedArr = new int[size];  // Tạo một mảng mới

    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i];  // Sao chép giá trị từ mảng gốc theo thứ tự ngược
    }

    return reversedArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* reversedArr = reverseCopyArray(arr, size);

    std::cout << "Mảng gốc: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mảng sau khi đảo ngược: ";
    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] reversedArr;  // Giải phóng bộ nhớ động

    return 0;
}
