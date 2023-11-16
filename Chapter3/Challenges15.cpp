#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{
    char ch;
    
    cout << "Type a character and press Enter:";
    cin >>ch;
    cout << "You entered" <<setw(2) << ch <<endl;
    return 0;

}