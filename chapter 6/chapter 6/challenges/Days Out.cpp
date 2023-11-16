#include <iostream>
using namespace std;

// Hàm để nhập số lượng nhân viên trong công ty
int getEmployeeCount() {
    int employeeCount;
    do {
        cout << "Nhập số lượng nhân viên trong công ty: ";
        cin >> employeeCount;
    } while (employeeCount < 1);
    return employeeCount;
}

// Hàm để nhập số ngày nghỉ việc của từng nhân viên và trả về tổng số ngày nghỉ việc
int getTotalAbsentDays(int employeeCount) {
    int totalAbsentDays = 0;
    for (int i = 0; i < employeeCount; i++) {
        int absentDays;
        do {
            cout << "Nhập số ngày nghỉ việc của nhân viên " << i + 1 << ": ";
            cin >> absentDays;
        } while (absentDays < 0);
        totalAbsentDays += absentDays;
    }
    return totalAbsentDays;
}

// Hàm tính và trả về số ngày vắng mặt trung bình
double calculateAverageAbsentDays(int employeeCount, int totalAbsentDays) {
    return static_cast<double>(totalAbsentDays) / employeeCount;
}

int main() {
    int employeeCount = getEmployeeCount();
    int totalAbsentDays = getTotalAbsentDays(employeeCount);
    
    double averageAbsentDays = calculateAverageAbsentDays(employeeCount, totalAbsentDays);
    
    cout << "Số ngày vắng mặt trung bình của nhân viên trong công ty: " << averageAbsentDays << " ngày" << endl;

    return 0;
}
