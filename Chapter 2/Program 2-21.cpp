#include <iostream>
using namespace std;

int main() {
    double regularWages, // L?u l??ng c? b?n
        basePayRate = 18.25, // T? l? l??ng c? b?n
        regularHours = 40.0, // Gi? làm vi?c tr? gi? làm thêm
        overtimeWages, // L?u l??ng làm thêm gi?
        overtimePayRate = 27.78, // T? l? l??ng làm thêm gi?
        overtimeHours = 10, // Gi? làm thêm gi?
        totalWages; // L?u t?ng l??ng

    // Tính toán l??ng c? b?n
    regularWages = basePayRate * regularHours;

    // Tính toán l??ng làm thêm gi?
    overtimeWages = overtimePayRate * overtimeHours;

    // Tính toán t?ng l??ng
    totalWages = regularWages + overtimeWages;

    // Hi?n th? t?ng l??ng
    cout << "L??ng cho tu?n này là $" << totalWages << endl;

    return 0;
}
