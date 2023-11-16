#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
    int intValue = 3000;
    double doubleValue = 35.45;
    string stringValue = " John J. Smith";

    cout<<" (" <<setw(5) << intValue << ")" << endl;
    cout<<" ("<<setw(7) << doubleValue << ")" << endl;
    cout<<" (" <<setw(18) << stringValue << ")" << endl;
    return 0;

}