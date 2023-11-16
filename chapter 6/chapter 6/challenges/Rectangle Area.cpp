#include <iostream>
using namespace std;

// Hàm yêu cầu người dùng nhập chiều dài và trả về giá trị gấp đôi
double getLength() {
    double length;
    cout << "Nhập chiều dài của hình chữ nhật: ";
    cin >> length;
    return length * 2;
}

// Hàm yêu cầu người dùng nhập chiều rộng và trả về giá trị
double getWidth() {
    double width;
    cout << "Nhập chiều rộng của hình chữ nhật: ";
    cin >> width;
    return width;
}

// Hàm tính diện tích dựa trên chiều dài và chiều rộng
double getArea(double length, double width) {
    return length * width;
}

// Hàm hiển thị dữ liệu của hình chữ nhật
void displayData(double length, double width, double area) {
    cout << "Chiều dài: " << length / 2 << endl;
    cout << "Chiều rộng: " << width << endl;
    cout << "Diện tích: " << area << endl;
}

int main() {
    double length, width, area;

    length = getLength();
    width = getWidth();
    area = getArea(length / 2, width);

    displayData(length, width, area);

    return 0;
}
