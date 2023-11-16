#include <iostream>
using namespace std;

int main() {
    // Bi?n ?? l?u giá th??ng, s? ti?n gi?m giá và giá bán.
    double regularPrice = 59.95, discount, salePrice;

    // Tính s? ti?n gi?m giá 20%.
    discount = regularPrice * 0.2;

    // Tính giá bán b?ng cách tr? s? ti?n gi?m giá kh?i giá th??ng.
    salePrice = regularPrice - discount;

    // Hi?n th? k?t qu?.
    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl;

    return 0;
}
