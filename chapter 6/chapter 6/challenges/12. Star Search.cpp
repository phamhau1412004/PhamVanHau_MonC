#include <iostream>
using namespace std;

const int NUM_JUDGES = 5; // Số lượng giám khảo

// Hàm yêu cầu người dùng nhập điểm của giám khảo và xác thực nó
void getJudgeData(double &score) {
    do {
        cout << "Nhập điểm của giám khảo: ";
        cin >> score;
        if (score < 0 || score > 10) {
            cout << "Điểm không hợp lệ. Hãy nhập lại." << endl;
        }
    } while (score < 0 || score > 10);
}

// Hàm tìm và trả về điểm thấp nhất trong danh sách điểm
double findLowest(const double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Hàm tìm và trả về điểm cao nhất trong danh sách điểm
double findHighest(const double scores[]) {
    double highest = scores[0];
    for (int i = 1; i < NUM_JUDGES; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// Hàm tính và hiển thị giá trị trung bình của ba điểm giữ nguyên sau khi loại bỏ điểm cao nhất và thấp nhất
void calcScore(const double scores[]) {
    double lowest = findLowest(scores);
    double highest = findHighest(scores);
    double sum = 0;
    
    // Tính tổng điểm (loại bỏ điểm cao nhất và thấp nhất)
    for (int i = 0; i < NUM_JUDGES; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            sum += scores[i];
        }
    }

    // Tính điểm cuối cùng và hiển thị
    double finalScore = sum / (NUM_JUDGES - 2); // Bỏ điểm cao nhất và thấp nhất
    cout << "Điểm cuối cùng của thí sinh: " << finalScore << endl;
}

int main() {
    double judgeScores[NUM_JUDGES];

    // Nhập điểm từng giám khảo
    for (int i = 0; i < NUM_JUDGES; i++) {
        getJudgeData(judgeScores[i]);
    }

    // Tính và hiển thị điểm cuối cùng
    calcScore(judgeScores);

    return 0;
}
