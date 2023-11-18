#include <iostream>
using namespace std;
class IFace {
    public:
    virtual void show()=0;
    virtual IFace* clone()=0;
    virtual ~IFace(){

    }
};

class Face : public IFace {
    private:
    string shape;
    protected:
    string getShape(){
        return shape;
    }
    public:
    Face(string sh) : shape(sh) {
    }
    virtual void show() {
        cout << "Shape:" << shape << endl;
    }
    IFace* clone() override {
        return new Face(*this);
    }
};
class EyedFace : public Face {
    private:
    int eyes;
    public:
    static int count;
    EyedFace(string sh, int e) : Face(sh), eyes(e) {
        count++;
    }

    ~EyedFace(){
        count--;

    }

    void show() override {
        cout << "Shape:" << getShape() << ",Eyes:" << eyes << endl;
    }

IFace* clone() override {
    return new EyedFace(*this);
}
    static int getCount(){
        return count;

    }
};
void testFace(IFace* fc) {
    IFace** a = new IFace * [3];
    a[0] = fc;
    a[1] = fc->clone();
    a[2] = fc->clone();
    for(int i = 0; i < 3; i++){
        a[i]->show();
        delete a[i];
    }
    cout << "The same 3 lines?" << endl;
    delete []a;
}
int EyedFace::count = 0;

int main (){
    Face fc1("Rectangle");
    testFace(&fc1);
    cout << "So doi tuong trong bo nho : " << EyedFace::getCount() << endl;
    return 0;
}