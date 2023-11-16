#include <iostream>
#include <map>
using namespace std;

map<char, string> morseCode = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
    {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
    {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
    {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
    {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
    {'8', "---.."}, {'9', "----."}
};

string textToMorse(const string& text) {
    string morseText;
    for (char c : text) {
        if (c == ' ') {
            morseText += " ";
        } else if (morseCode.find(toupper(c)) != morseCode.end()) {
            morseText += morseCode[toupper(c)] + " ";
        }
    }
    return morseText;
}

int main() {
    string inputText;
    cout << "Nhập chuỗi cần chuyển đổi thành mã Morse: ";
    getline(cin, inputText);

    string morseText = textToMorse(inputText);
    cout << "Chuỗi Morse: " << morseText << endl;

    return 0;
}
