#include <iostream>
using namespace std;

// Hàm tính tổng chi phí cho bệnh nhân nội trú
double calculateInpatientCost(int days, double dailyRate, double medicationCost, double serviceCost) {
    if (days < 0 || dailyRate < 0 || medicationCost < 0 || serviceCost < 0) {
        return -1.0; // Dữ liệu không hợp lệ
    }
    return (days * dailyRate) + medicationCost + serviceCost;
}

// Hàm tính tổng chi phí cho bệnh nhân ngoại trú
double calculateOutpatientCost(double medicationCost, double serviceCost) {
    if (medicationCost < 0 || serviceCost < 0) {
        return -1.0; // Dữ liệu không hợp lệ
    }
    return medicationCost + serviceCost;
}

int main() {
    char patientType;
    cout << "Loại bệnh nhân (I: nội trú, O: ngoại trú): ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        int days;
        double dailyRate, medicationCost, serviceCost;
        
        cout << "Số ngày nằm viện: ";
        cin >> days;
        cout << "Tỷ giá hàng ngày: ";
        cin >> dailyRate;
        cout << "Tiền thuốc bệnh viện: $";
        cin >> medicationCost;
        cout << "Phí dịch vụ bệnh viện: $";
        cin >> serviceCost;

        double totalCost = calculateInpatientCost(days, dailyRate, medicationCost, serviceCost);
        
        if (totalCost >= 0) {
            cout << "Tổng chi phí cho bệnh nhân nội trú: $" << totalCost << endl;
        } else {
            cout << "Dữ liệu không hợp lệ." << endl;
        }
    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCost, serviceCost;

        cout << "Tiền thuốc bệnh viện: $";
        cin >> medicationCost;
        cout << "Phí dịch vụ bệnh viện: $";
        cin >> serviceCost;

        double totalCost = calculateOutpatientCost(medicationCost, serviceCost);
        
        if (totalCost >= 0) {
            cout << "Tổng chi phí cho bệnh nhân ngoại trú: $" << totalCost << endl;
        } else {
            cout << "Dữ liệu không hợp lệ." << endl;
        }
    } else {
        cout << "Loại bệnh nhân không hợp lệ." << endl;
    }

    return 0;
}
