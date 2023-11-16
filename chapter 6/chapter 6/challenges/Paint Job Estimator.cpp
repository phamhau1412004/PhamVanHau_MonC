#include <iostream>
using namespace std;

const double COST_PER_GALLON = 25.00;

// Hàm tính chi phí sơn một phòng
void calculateRoomCost(int roomArea, double paintPrice, int& gallonsNeeded, double& laborCost, double& paintCost, double& totalCost) {
    gallonsNeeded = roomArea / 110 + 1;  // Số gallon cần sơn
    laborCost = 8 * gallonsNeeded * COST_PER_GALLON;  // Chi phí lao động
    paintCost = gallonsNeeded * paintPrice;  // Chi phí sơn
    totalCost = laborCost + paintCost;  // Tổng chi phí
}

int main() {
    int numRooms;
    double paintPrice;
    int roomArea;

    cout << "Số lượng phòng cần sơn: ";
    cin >> numRooms;
    cout << "Giá sơn mỗi gallon: $";
    cin >> paintPrice;

    if (numRooms < 1 || paintPrice < 10.00) {
        cout << "Dữ liệu không hợp lệ." << endl;
        return 1;
    }

    double totalPaintCost = 0;
    double totalLaborCost = 0;
    double totalCost = 0;

    for (int i = 0; i < numRooms; i++) {
        cout << "Diện tích tường trong phòng " << (i + 1) << " (feet vuông): ";
        cin >> roomArea;

        if (roomArea < 0) {
            cout << "Diện tích tường không hợp lệ." << endl;
            return 1;
        }

        int gallonsNeeded;
        double laborCost, paintCost, roomTotalCost;

        calculateRoomCost(roomArea, paintPrice, gallonsNeeded, laborCost, paintCost, roomTotalCost);

        totalPaintCost += paintCost;
        totalLaborCost += laborCost;
        totalCost += roomTotalCost;

        cout << "Phòng " << (i + 1) << ":" << endl;
        cout << "Số gallon sơn cần thiết: " << gallonsNeeded << endl;
        cout << "Số giờ lao động cần thiết: " << 8 * gallonsNeeded << " giờ" << endl;
        cout << "Chi phí sơn: $" << paintCost << endl;
        cout << "Chi phí lao động: $" << laborCost << endl;
        cout << "Tổng chi phí phòng " << (i + 1) << ": $" << roomTotalCost << endl;
    }

    cout << "Tổng chi phí sơn: $" << totalCost << endl;

    return 0;
}
