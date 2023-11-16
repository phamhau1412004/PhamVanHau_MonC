#include <iostream>
#include <string>
#include <cctype> // Để sử dụng isupper

using namespace std;

string convertToProperSentence(const string& input) {
    string result = "";

    for (int i = 0; i < input.length(); i++) {
        char currentChar = input[i];

        // Nếu ký tự hiện tại là chữ hoa và không phải từ đầu tiên, thêm dấu cách trước nó
        if (isupper(currentChar) && i > 0) {
            result += ' ';
        }

        result += currentChar;
    }

    return result;
}

int main() {
    string input;
    cout << "Nhập câu với các từ được viết hoa: ";
    getline(cin, input);

    string convertedSentence = convertToProperSentence(input);

    cout << "Kết quả: " << convertedSentence << endl;

    return 0;
}
