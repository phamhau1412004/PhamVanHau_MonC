#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char mostFrequentCharacter(const string &str) {
    unordered_map<char, int> charCount;

    for (char c : str) {
        if (isalpha(c)) {
            charCount[c]++;
        }
    }

    char mostFrequentChar = ' ';
    int maxCount = 0;

    for (const auto &entry : charCount) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            mostFrequentChar = entry.first;
        }
    }

    return mostFrequentChar;
}

int main() {
    string input;
    cout << "Nhập chuỗi: ";
    getline(cin, input);

    char mostFrequent = mostFrequentCharacter(input);

    if (mostFrequent != ' ') {
        cout << "Ký tự xuất hiện thường xuyên nhất trong chuỗi: " << mostFrequent << endl;
    } else {
        cout << "Không có ký tự hợp lệ nào trong chuỗi." << endl;
    }

    return 0;
}
