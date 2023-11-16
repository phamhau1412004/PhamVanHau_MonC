#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    ifstream inputFile("text.txt");  // Mở tệp tin text.txt
    if (!inputFile) {
        std::cerr << "Không thể mở tệp tin.\n";
        return 1;
    }

    char ch;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    while (inputFile.get(ch)) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else if (islower(ch)) {
            lowercaseCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        }
    }

    cout << "Số chữ in hoa trong tệp tin: " << uppercaseCount << endl;
    cout << "Số chữ thường trong tệp tin: " << lowercaseCount << endl;
    cout << "Số chữ số trong tệp tin: " << digitCount << endl;

    inputFile.close();  // Đóng tệp tin

    return 0;
}
