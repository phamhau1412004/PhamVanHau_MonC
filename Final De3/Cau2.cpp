#include <iostream>
using namespace std;
class Base {
    public:
    Base() {
        cout << "Constructor of Base" << endl;
    }
    // HÀm hủy áo
    virtual ~Base(){
        cout << "Destructor of Base" << endl;
    }
};

class Derived : public Base {
    public:
    Derived() {
        cout << "Constructor of Derived" << endl;
    }

    // Hàm hủy
    ~Derived() {
        cout << "Destructor of Derived" << endl;
    }
};

int main (){
    Base* obj = new Derived(); // Ở đây xảy ra slicing(ngjiax là mất đi 1 phần thông tin) nếu không có hàm hủy áo
    delete obj; //Đối tượng cha chỉ giải phóng phần cảu nó không giải phóng phần của đối tượng con

    return 0;
}