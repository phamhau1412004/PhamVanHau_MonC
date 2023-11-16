#include <iostream>
using namespace std;

int main()
{
    int books;      // Number of books to read
    int months;     // Number of months spent reading
    double perMonth; // Average number of books per month

    cout << "How many books do you plan to read? ";
    cin >> books;   // Read the number of books from the user.
    
    cout << "How many months will it take you to read them? ";
    cin >> months;  // Read the number of months from the user.

    // Use a type cast to ensure floating-point division.
    perMonth = static_cast<double>(books) / months;

    cout << "That is " << perMonth << " books per month." << endl;

    return 0;
}