#include <iostream>

// Hàm để tạo mảng mới lớn hơn mảng đối số và sao chép các phần tử
int* shiftArray(const int arr[], int size) {
    int newSize = size + 1;  // Kích thước mới lớn hơn một phần tử
    int* newArray = new int[newSize];  // Tạo mảng mới với kích thước mới

    newArray[0] = 0;  // Phần tử đầu tiên của mảng mới là 0

    for (int i = 0; i < size; i++) {
        newArray[i + 1] = arr[i];  // Sao chép các phần tử của mảng đối số sang mảng mới
    }

    return newArray;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* newArray = shiftArray(arr, size);

    std::cout << "Mảng gốc: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mảng mới: ";
    for (int i = 0; i < size + 1; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] newArray;  // Giải phóng bộ nhớ động

    return 0;
}
