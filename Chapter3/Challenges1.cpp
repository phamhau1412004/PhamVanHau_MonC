#include <iostream>
using namespace std;

int main()
{
    double gallons,km,A ;

    cout << "The number of gallons of gas the car ";
    cin >> gallons;
    cout << "The number of miles it can be driven on a full tank.";
    cin >> km;
    A = km/gallons ;
    cout << "The number of miles it can be" << A << endl;
    return 0;

}