#include <iostream>
#include <algorithm>

// Hàm để tính giá trị trung bình của mảng
double calculateMean(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Hàm để tính giá trị trung vị của mảng
double calculateMedian(const int arr[], int size) {
    if (size % 2 == 0) {
        int mid1 = (size - 1) / 2;
        int mid2 = size / 2;
        return (static_cast<double>(arr[mid1] + arr[mid2]) / 2.0);
    } else {
        int mid = size / 2;
        return static_cast<double>(arr[mid]);
    }
}

// Hàm để tính giá trị mốt của mảng
double calculateMode(const int arr[], int size) {
    std::map<int, int> frequency;
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    int mode = arr[0];
    int maxCount = 1;
    for (auto const& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

int main() {
    int numStudents;
    std::cout << "Nhập số lượng học sinh được khảo sát: ";
    std::cin >> numStudents;

    if (numStudents <= 0) {
        std::cout << "Số lượng học sinh không hợp lệ." << std::endl;
        return 1;
    }

    int* movieCount = new int[numStudents];

    for (int i = 0; i < numStudents; i++) {
        do {
            std::cout << "Nhập số lượng phim mà học sinh " << i + 1 << " đã xem: ";
            std::cin >> movieCount[i];
        } while (movieCount[i] < 0);
    }

    double mean = calculateMean(movieCount, numStudents);
    double median = calculateMedian(movieCount, numStudents);
    double mode = calculateMode(movieCount, numStudents);

    std::cout << "Giá trị trung bình: " << mean << std::endl;
    std::cout << "Giá trị trung vị: " << median << std::endl;
    std::cout << "Giá trị mốt: " << mode << std::endl;

    delete[] movieCount;  // Giải phóng bộ nhớ động

    return 0;
}
