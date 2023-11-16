#include <iostream>
using namespace std;

int main()
{
    short testVar = 32767; // Khai báo một biến nguyên  với giá trị tối đa (2^15 - 1)

    cout << testVar << endl; // In ra giá trị của biến testVar (32767)

    testVar = testVar << 1; // Dịch trái giá trị của biến testVar (nhân đôi giá trị)
    cout << testVar << endl; // In ra giá trị mới của biến testVar (bị tràn số âm, nên giá trị là -32768)

    testVar = testVar - 1; // Trừ đi 1 từ giá trị của biến testVar
    cout << testVar << endl; // In ra giá trị mới của biến testVar (-32769)

    return 0;
}
