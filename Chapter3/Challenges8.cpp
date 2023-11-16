#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int num1 = 2897, num2 = 5, num3 = 837, num4 = 34,
     num5 = 7, num6 =1623, num7= 350, num8 =2345, num9 = 19;
    cout << setw(6) << num1 << setw(6)
         << num2 << setw(6) << num3 << endl;
    cout << setw(6) << num4 << setw(6)
         << num5 << setw(6) << num6 << endl;
    cout << setw(6) << num7 << setw(6)
         << num8 << setw(6) << num9 << endl;
    
    return 0;
}