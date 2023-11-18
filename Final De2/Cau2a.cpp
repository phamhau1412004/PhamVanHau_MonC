#include <iostream>
using namespace std;

// Đa hinh động
class PTIT {
    public:
     virtual void show(){
        cout << "I love PTIT" << endl;
     }
};

class UFM : public PTIT {
    public:
    void show(){
        cout << "I love UFM" << endl;
    }
};

class HANU : public PTIT {
    public:
    void show(){
        cout << "I love HANU" << endl;
    }
};

int main (){
    PTIT*ptit1 = new UFM();
    PTIT*ptit2 = new HANU();

    ptit1->show(); // I love UFM
    ptit2 ->show(); // I love HANU

    delete ptit1;
    delete ptit2;
    return 0;
}