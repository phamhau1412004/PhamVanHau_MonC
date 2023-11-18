#include <iostream>
using namespace std;

// Lớp trừu tượng
class PTIT {
    public:
    void displayinfo() {
        cout << "I love PTIT" << endl;
    }
};
 // Lớp con kế thừa từ lớp trừu tượng
 class UFM : public PTIT {
    public:
    void show(){
        cout << "I love UFM" << endl;
    }
 

 void display(){
    cout << "I love HNU" << endl;
 }
 };
 
 int main (){
    // Không thể tạo đói tượng từ lớp tựu trường
    // PTIT*ptit = new PTIT(); // Lỗi

    UFM ufm;
    ufm.show();
    ufm.display();
    ufm.displayinfo();

    return 0;
 }