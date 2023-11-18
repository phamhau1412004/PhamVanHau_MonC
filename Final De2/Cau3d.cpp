// Mã nguồn được sửa ngay trong lớp Sin và khai báo trong hàm main có sự thay đổi như sau:
Lớp Sin:
class Sin:public Function {
    private:
    static Sin*instance;
    public:
    Sin(){

    }
    static Sin*getlnstance(){
        if(instance == NULL){ // có thể sử dụng Nullptr;
        instance = new Sin();}
    }
    return instance;
}
double value(double x) {
    return sin(x);
}
double Derive(double x) {
    return cos(x);
}
}

Ta phải khởi tạo con trỏ instance là 1 con trỏ rỗng
Sin* Sin:instance == NULL;

Hàm main:
int main (){
    double x = 3.14/6; // Pi/6
    Sin* s = Sin::getlnstance();
    douyble y = DeriveProduct(s, s, x);
    printf("sin(x) = %f, sin(x) = %f\n", s->Value(x), s->Derive(x));
    printf("y = %f\n", y);
}