// viết lớp EyedFace dựa trên 2 lớp trên
class IFace {
    public:
    virtual void show() = 0;
    virtual IFace* clone() = 0;
    virtual ~IFace() {

    }
};

class Face * public IFace {
    private:
    string shape;
    protected:
    string getShape:
}
public:
Face(string sh) : shape(sh) {

}
virtual void show(){
    cout << "Shape:" << shape << endl;
}
IFace* clone() override {
    return new Face(*this);
}

};

class EyedFace : public Face {
    private:
    int eeyes;
    public:
    EyedFace(string sh, int e) : Face(sh), eyes(e) {

    }

    IFace* clone() override {
        return new EyedFace(*this);
    }

    void show(){
        cout << "Shape:" << getShape() << ",Eyes:" << eyes << endl;
    }
};