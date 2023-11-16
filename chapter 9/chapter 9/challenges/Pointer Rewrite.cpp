#include <iostream>

int doSomething(int* x, int* y) {
    int tamThoi = *x;
    *x = *y * 10;
    *y = tamThoi * 10;
    return (*x) + (*y);
}

int main() {
    int a, b;

    std::cout << "Nhập giá trị a: ";
    std::cin >> a;

    std::cout << "Nhập giá trị b: ";
    std::cin >> b;

    int ketQua = doSomething(&a, &b);

    std::cout << "Giá trị a sau khi xử lý: " << a << std::endl;
    std::cout << "Giá trị b sau khi xử lý: " << b << std::endl;
    std::cout << "Kết quả: " << ketQua << std::endl;

    return 0;
}
