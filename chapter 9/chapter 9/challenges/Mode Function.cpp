#include <iostream>
#include <algorithm>

// Hàm để tìm chế độ trong mảng số nguyên
int findMode(const int *arr, int size) {
    if (size <= 0) {
        return -1;  // Trả về -1 nếu mảng rỗng hoặc không có giá trị nào.
    }

    // Sắp xếp mảng để dễ dàng xác định chế độ.
    int *sortedArr = new int[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    int currentMode = sortedArr[0];  // Giá trị xuất hiện thường xuyên nhất ban đầu
    int currentModeCount = 1;  // Số lần xuất hiện của giá trị ban đầu
    int maxMode = currentMode;  // Lưu giá trị xuất hiện thường xuyên nhất
    int maxModeCount = currentModeCount;  // Số lần xuất hiện nhiều nhất

    for (int i = 1; i < size; i++) {
        if (sortedArr[i] == sortedArr[i - 1]) {
            currentModeCount++;
        } else {
            currentMode = sortedArr[i];
            currentModeCount = 1;
        }

        if (currentModeCount > maxModeCount) {
            maxMode = currentMode;
            maxModeCount = currentModeCount;
        }
    }

    delete[] sortedArr;  // Giải phóng bộ nhớ động

    return maxMode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = findMode(arr, size);

    if (mode != -1) {
        std::cout << "Chế độ của mảng là: " << mode << std::endl;
    } else {
        std::cout << "Mảng không có chế độ." << std::endl;
    }

    return 0;
}
