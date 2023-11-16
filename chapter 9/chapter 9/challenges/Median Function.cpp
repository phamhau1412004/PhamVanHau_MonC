#include <iostream>

// Hàm để tính giá trị trung bình của mảng số nguyên
std::pair<double, double> findMedian(const int *arr, int size) {
    double median1, median2;

    if (size % 2 == 0) {
        // Trường hợp số phần tử chẵn, có hai giá trị trung tâm
        int mid1 = (size - 1) / 2;
        int mid2 = size / 2;
        median1 = static_cast<double>(arr[mid1] + arr[mid2]) / 2.0;
        median2 = median1;
    } else {
        // Trường hợp số phần tử lẻ, có một giá trị trung tâm
        int mid = size / 2;
        median1 = static_cast<double>(arr[mid]);
        median2 = median1;
    }

    return std::make_pair(median1, median2);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::pair<double, double> medians = findMedian(arr, size);

    std::cout << "Giá trị trung bình của mảng là: " << medians.first;
    
    // Kiểm tra nếu có hai giá trị trung tâm (số phần tử chẵn)
    if (medians.first != medians.second) {
        std::cout << " và " << medians.second;
    }
    
    std::cout << std::endl;

    return 0;
}
