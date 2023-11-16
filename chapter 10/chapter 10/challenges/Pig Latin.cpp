#include <iostream>
#include <string>
#include <sstream>
using namespace std ;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string toPigLatin(const string& word) {
    if (word.empty()) {
        return word;
    }

    char firstChar = word[0];
    if (isVowel(firstChar)) {
        return word + "ay";
    }

    return word.substr(1) + firstChar + "ay";
}

int main() {
    string sentence;
    cout << "Nhập một câu: ";
    getline(cin, sentence);

    string pigLatinSentence;
    istringstream stream(sentence);
    string word;

    while (stream >> word) {
        pigLatinSentence += toPigLatin(word) + " ";
    }

    cout << "Pig Latin: " << pigLatinSentence << endl;

    return 0;
}
