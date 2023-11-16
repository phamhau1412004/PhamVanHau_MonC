#include <iostream>
#include <string>
using namespace std;

// Hàm để nhập số lượng vụ tai nạn trong một khu vực
int getNumAccidents(const string& region) {
    int accidents;
    cout << "Nhập số vụ tai nạn ô tô được báo cáo ở khu vực " << region << " trong năm qua: ";
    cin >> accidents;
    while (accidents < 0) {
        cout << "Số vụ tai nạn không hợp lệ. Vui lòng nhập lại: ";
        cin >> accidents;
    }
    return accidents;
}

// Hàm để xác định khu vực có ít tai nạn nhất
void findLowest(int& accidentsNorth, int& accidentsSouth, int& accidentsEast, int& accidentsWest, int& accidentsCentral) {
    string safestRegion;
    int lowestAccidents = accidentsNorth;
    
    if (accidentsSouth < lowestAccidents) {
        lowestAccidents = accidentsSouth;
        safestRegion = "Nam";
    }
    if (accidentsEast < lowestAccidents) {
        lowestAccidents = accidentsEast;
        safestRegion = "Đông";
    }
    if (accidentsWest < lowestAccidents) {
        lowestAccidents = accidentsWest;
        safestRegion = "Tây";
    }
    if (accidentsCentral < lowestAccidents) {
        safestRegion = "Trung Bộ";
    }
    
    cout << "Khu vực " << safestRegion << " có ít vụ tai nạn ô tô nhất: " << lowestAccidents << " vụ." << endl;
}

int main() {
    int accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral;
    
    accidentsNorth = getNumAccidents("Bắc");
    accidentsSouth = getNumAccidents("Nam");
    accidentsEast = getNumAccidents("Đông");
    accidentsWest = getNumAccidents("Tây");
    accidentsCentral = getNumAccidents("Trung Bộ");
    
    findLowest(accidentsNorth, accidentsSouth, accidentsEast, accidentsWest, accidentsCentral);
    
    return 0;
}
