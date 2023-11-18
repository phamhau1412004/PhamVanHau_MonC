// Mã nguồn cho Cos:
class Cos:public Function{
    public:
    double value(double x){
        return cos(x);
    }
    double Derive(double x){
        return sin(x);
    }
}