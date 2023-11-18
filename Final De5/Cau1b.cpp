#include <iostream>
using namespace std;
class A {
    public:
    A() {
        a = new int[3];
        for (int i = 0; i < 3; i++) a[i] = i + 1;
    }
    ~A() {
        delete[] a;
    }
    // them ham copy du lieu
    void copydulieu(const A& other) {
        for (int i = 0; i < 3; i++){
            a[i] = other.a[i];
        }
    }
    private:
    int *a;
};
void init(A& a) {
    A b;
    a.copydulieu(b);
}
int main (){
    A obj;
    init(obj );
}
