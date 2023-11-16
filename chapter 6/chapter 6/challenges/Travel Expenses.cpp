#include <iostream>
#include <string>
using namespace std;

// Hàm yêu cầu và kiểm tra dữ liệu kiểu int không âm
int getNonNegativeInt(const string& prompt) {
    int value;
    do {
        cout << prompt;
        cin >> value;
        if (value < 0) {
            cout << "Vui lòng không nhập số âm. Thử lại." << endl;
        }
    } while (value < 0);
    return value;
}

// Hàm yêu cầu và kiểm tra thời gian
string getTime(const string& prompt, int maxHour) {
    int hour;
    int minute;
    string timeStr;
    do {
        cout << prompt;
        cin >> hour >> minute;
        if (hour < 0 || hour > maxHour || minute < 0 || minute > 59) {
            cout << "Thời gian không hợp lệ. Thử lại." << endl;
        } else {
            timeStr = to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute);
        }
    } while (hour < 0 || hour > maxHour || minute < 0 || minute > 59);
    return timeStr;
}

int main() {
    int totalDays = getNonNegativeInt("Số ngày trong chuyến đi: ");
    string departureTime = getTime("Thời gian khởi hành (giờ phút): ", 23);
    string arrivalTime = getTime("Thời gian đến nơi (giờ phút): ", 23);

    double airfare = getNonNegativeInt("Tổng số tiền vé máy bay: $");
    double carRentals = getNonNegativeInt("Tổng số tiền thuê xe: $");

    int milesDriven = getNonNegativeInt("Số dặm lái xe riêng: ");
    double vehicleExpense = milesDriven * 0.27;

    int parkingFees = getNonNegativeInt("Tổng số tiền để xe: $");
    int taxiFees = getNonNegativeInt("Tổng số tiền taxi: $");

    double conferenceFees = getNonNegativeInt("Tổng số tiền đăng ký hội nghị/seminar: $");
    double hotelExpenses = getNonNegativeInt("Tổng số tiền khách sạn: $");

    double breakfast = getNonNegativeInt("Tổng số tiền ăn sáng: $");
    double lunch = getNonNegativeInt("Tổng số tiền ăn trưa: $");
    double dinner = getNonNegativeInt("Tổng số tiền ăn tối: $");

    double totalExpenses = airfare + carRentals + vehicleExpense + parkingFees + taxiFees +
                           conferenceFees + hotelExpenses + breakfast + lunch + dinner;

    double totalAllowedExpenses = static_cast<double>(totalDays) * (90 + 6 + 10 + 9 + 12 + 16);
    double excess = totalExpenses - totalAllowedExpenses;
    double saved = (excess > 0) ? 0 : totalAllowedExpenses - totalExpenses;

    cout << "Tổng chi phí của bạn: $" << totalExpenses << endl;
    cout << "Tổng chi phí được phép: $" << totalAllowedExpenses << endl;
    cout << "Số tiền thặng dư phải hoàn lại (nếu có): $" << (excess > 0 ? excess : 0) << endl;
    cout << "Số tiền bạn tiết kiệm (nếu có): $" << (excess > 0 ? 0 : saved) << endl;

    return 0;
}
