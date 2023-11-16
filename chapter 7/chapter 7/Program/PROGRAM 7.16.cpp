#include <iostream>
using namespace std;

void showValue(int); // Function prototype

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };

    for (int index = 0; index < SIZE; index++)
        showValue(numbers[index]);
    return 0;
}

void showValue(int num)
{
    cout << num << " ";
}
