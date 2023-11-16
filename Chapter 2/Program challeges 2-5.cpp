#include <iostream>
using namespace std;

int main() {
    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;

    int sum = value1 + value2 + value3 + value4 + value5;
    double average = static_cast<double>(sum) / 5;

    cout << "The average of the values is: " << average << endl;

    return 0;
}
