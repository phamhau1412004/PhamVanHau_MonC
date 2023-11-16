#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SO_CAU_HOI = 20;

void docCauTraLoiTuTep(const string &tenTep, char cauTraLoi[], int soCauHoi) {
    ifstream tep(tenTep);

    if (!tep) {
        cout << "Lỗi mở tệp: " << tenTep << endl;
        exit(1);
    }

    for (int i = 0; i < soCauHoi; i++) {
        if (!tep.get(cauTraLoi[i])) {
            cout << "Lỗi đọc câu trả lời từ tệp." << endl;
            exit(1);
        }
        tep.ignore(); // Bỏ qua ký tự xuống dòng
    }

    tep.close();
}

int main() {
    char cauTraLoiDung[SO_CAU_HOI];
    char cauTraLoiSinhVien[SO_CAU_HOI];

    docCauTraLoiTuTep("CorrectAnswers.txt", cauTraLoiDung, SO_CAU_HOI);
    docCauTraLoiTuTep("StudentAnswers.txt", cauTraLoiSinhVien, SO_CAU_HOI);

    int soCauHoiSai = 0;
    int soCauHoiDung = 0;

    cout << "Các câu hỏi bị trả lời sai bởi sinh viên:\n";

    for (int i = 0; i < SO_CAU_HOI; i++) {
        if (cauTraLoiSinhVien[i] != cauTraLoiDung[i]) {
            soCauHoiSai++;
            cout << "Câu hỏi " << (i + 1) << ": ";
            cout << "Câu trả lời đúng: " << cauTraLoiDung[i] << ", ";
            cout << "Câu trả lời của sinh viên: " << cauTraLoiSinhVien[i] << endl;
        } else {
            soCauHoiDung++;
        }
    }

    double phanTramDung = static_cast<double>(soCauHoiDung) / SO_CAU_HOI * 100;

    cout << "\nTổng số câu hỏi bị trả lời sai: " << soCauHoiSai << endl;
    cout << "Phần trăm câu hỏi được trả lời đúng: " << phanTramDung << "%" << endl;

    if (phanTramDung >= 70.0) {
        cout << "Sinh viên đã đỗ bài kiểm tra." << endl;
    } else {
        cout << "Sinh viên không đỗ bài kiểm tra." << endl;
    }

    return 0;
}
