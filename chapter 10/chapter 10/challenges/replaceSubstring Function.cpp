#include <iostream>
#include <string>
using namespace std;

string thayTheSubstring(const string &string1, const string &string2, const string &string3) {
    string result = string1;
    size_t found = result.find(string2);

    while (found != string::npos) {
        result.replace(found, string2.length(), string3);
        found = result.find(string2, found + string3.length());
    }

    return result;
}

int main() {
    string string1 = "con chó nhảy qua hàng rào";
    string string2 = "cái";
    string string3 = "cái đó";

    string result = thayTheSubstring(string1, string2, string3);

    cout << "Kết quả: " << result << endl;

    return 0;
}
