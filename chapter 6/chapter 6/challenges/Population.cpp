#include <iostream>
using namespace std;

// Hàm tính quy mô dân số trong một năm
int calculatePopulationSize(int initialPopulation, double birthRate, double deathRate) {
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0) {
        return -1; // Dữ liệu không hợp lệ
    }
    return initialPopulation + (initialPopulation * birthRate) - (initialPopulation * deathRate);
}

int main() {
    int initialPopulation, numYears;
    double birthRate, deathRate;

    cout << "Kích thước ban đầu của quần thể: ";
    cin >> initialPopulation;
    cout << "Tỷ lệ sinh hàng năm (%): ";
    cin >> birthRate;
    cout << "Tỷ lệ tử vong hàng năm (%): ";
    cin >> deathRate;
    cout << "Số năm hiển thị: ";
    cin >> numYears;

    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || numYears < 1) {
        cout << "Dữ liệu không hợp lệ." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        initialPopulation = calculatePopulationSize(initialPopulation, birthRate / 100, deathRate / 100);
        if (initialPopulation == -1) {
            cout << "Dữ liệu không hợp lệ." << endl;
            return 1;
        }
        cout << "Dân số sau " << year << " năm: " << initialPopulation << endl;
    }

    return 0;
}
