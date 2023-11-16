#include <iostream>
using namespace std;

const int NUM_SCORES = 5; // Số lượng điểm kiểm tra

// Hàm yêu cầu người dùng nhập điểm kiểm tra và xác thực nó
void getScore(double &score) {
    do {
        cout << "Nhập một điểm kiểm tra: ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Điểm không hợp lệ. Hãy nhập lại." << endl;
        }
    } while (score < 0 || score > 100);
}

// Hàm tìm và trả về điểm thấp nhất trong danh sách điểm
double findLowest(const double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < NUM_SCORES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Hàm tính và hiển thị giá trị trung bình của 4 điểm cao nhất
void calcAverage(const double scores[]) {
    double lowest = findLowest(scores);
    double sum = 0;
    for (int i = 0; i < NUM_SCORES; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
        }
    }
    double average = sum / (NUM_SCORES - 1);
    cout << "Điểm trung bình của 4 điểm cao nhất: " << average << endl;
}

int main() {
    double scores[NUM_SCORES];

    // Nhập điểm cho từng kiểm tra
    for (int i = 0; i < NUM_SCORES; i++) {
        getScore(scores[i]);
    }

    // Tính và hiển thị điểm trung bình của 4 điểm cao nhất
    calcAverage(scores);

    return 0;
}
