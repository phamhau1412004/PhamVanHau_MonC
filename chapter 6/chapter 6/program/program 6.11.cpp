// This program uses a function to perform division. If division
// by zero is detected, the function returns.
#include<iostream>
using namespace std;

// Function prototype.
void divide(double,double);

int main()
{
    double num1 ,num2;

    cout << " Enter two numbers and I will divide the first\n";
    cout << " number by the second number: ";
    cin >> num1 >> num2 ;
    divide( num1, num2);
    return 0;
}