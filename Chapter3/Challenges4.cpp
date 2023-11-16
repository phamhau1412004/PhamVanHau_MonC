#include <iostream>
using namespace std;

int main() {
    int books; 
    int months;
    double perMonth;

    cout << " How many books do you plan to read?" << endl;
    cin >> books;
    cout << " How many  will it tank you to read them?" << endl;
    cin >> months;
    perMonth = static_cast<double>(books) / months;
    cout <<"That is " << perMonth << "books per month.\n";
    return 0;
}