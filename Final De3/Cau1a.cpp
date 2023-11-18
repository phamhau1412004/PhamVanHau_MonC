// Bạn hãy khai báo lớp đối tượng về các thao tác cho kiểu số
#include <iostream>
using namespace std;
class ComplexNumber{
    private:
    int a, b;
    public:
    ComplexNumber();
    ComplexNumber(int x, int y);
    void nhap ();
    void xuat ();
    ComplexNumber operator + (const ComplexNumber& other);
    ComplexNumber operator - (const ComplexNumber& other);
    ComplexNumber operator - ();
    ComplexNumber operator * (const ComplexNumber& other);
};

