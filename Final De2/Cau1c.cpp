// Viết mã của 5 phương thức trong số các phương thức đã khai báo ở câu trên
PhanSo::Phanso(){
    //Constructor mặc định, có thể khởi tạo giá trị mặc địnhcho tu va mau;
    tu = 0;
    mau = 1;
}

PhanSo::Phanso(int t, int m){
    // Constructor với tham số khởi tạo phân soostuwf tử và mẫu cho trước
    tu = t;
    mau = m;
}

ostream& operator << (ostream& out, const Phanso& ps){
    // toán tử xuất 
    out << ps.tu << / << ps.mau;
    return out;
}

PhanSo Phanso:: operator + (const Phanso& ps){
    //toán tử cộng
    Phanso tong;
    tong.tu = this->tu * ps.mau + this->mau * ps.tu;
    tong.mau = this->mau *ps.mau;
    return tong;
}

Phanso Phanso::operator + (int res){
    // toan tu cong so nguyen
    Phanso tong;
    tong.tu = this=>tu + res * this->mau;
    tong.mau = this->mau;
    return tong;
}

Phanso& Phanso::operator++(){
    // Toán tử tăng ++ (tiền tố)
    this->tu = this->tu + this->mau;
    return this;
}

Phanso& Phanso::operator += (const Phanso& ps){
    // Toán tử cộng và gán +=
    this->tu = this->tu * ps.mau + ps.tu * this->mau;
    this->mau= this ->mau * ps.mau;
    return*this;
}

Phanso::operator int (){
    //Chuyển đổi từ Phanso sang int, lấy phần nguyên của phân số
    return tu/mau;
}