#include <iostream>
using namespace std;

// Hàm tính quy mô dân số trong một năm
int calculatePopulationSize(int initialPopulation, double birthRate, double deathRate, int immigration, int emigration) {
    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0) {
        return -1; // Dữ liệu không hợp lệ
    }
    return initialPopulation + (initialPopulation * birthRate) - (initialPopulation * deathRate) + immigration - emigration;
}

int main() {
    int initialPopulation, numYears;
    double birthRate, deathRate;
    int immigration, emigration;

    cout << "Kích thước ban đầu của quần thể: ";
    cin >> initialPopulation;
    cout << "Tỷ lệ sinh hàng năm (%): ";
    cin >> birthRate;
    cout << "Tỷ lệ tử vong hàng năm (%): ";
    cin >> deathRate;
    cout << "Số người di chuyển vào mỗi năm: ";
    cin >> immigration;
    cout << "Số người di chuyển ra mỗi năm: ";
    cin >> emigration;

    cout << "Dự đoán dân số trong bao nhiêu năm? ";
    cin >> numYears;

    if (initialPopulation < 2 || birthRate < 0 || deathRate < 0 || immigration < 0 || emigration < 0 || numYears < 1) {
        cout << "Dữ liệu không hợp lệ." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        initialPopulation = calculatePopulationSize(initialPopulation, birthRate / 100, deathRate / 100, immigration, emigration);
        if (initialPopulation == -1) {
            cout << "Dữ liệu không hợp lệ." << endl;
            return 1;
        }
        cout << "Dân số sau " << year << " năm: " << initialPopulation << endl;
    }

    return 0;
}
