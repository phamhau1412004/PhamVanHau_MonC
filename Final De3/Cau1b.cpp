// Hãy cài đặt mã cho các thao tác kể trên
ComplexNumber::ComplexNumber(){
    a = 0;
    b = 0;
}

ComplexNumber::ComplexNumber(int x, int y){
    a = x;
    b = y;
}

void ComplexNumber::nhap(){
    cout << "Nhap phan thuc =";
    cin >> a;
    cout << "Nhap phan so =";
    cin >> b;
}

void ComplexNumber::xuat(){
    if(a != 0 && b != 0){
        cout << a << " t " << b << "can7";
    }
    else if(a != 0 && b != 0 && b < 0){
        cout << a << "" << b << "can7";
    }else if (a != 0 && b == 0){
        cout << a;
    }else if ( a == 0 & b != 0){
        cout << b << "can7";
    }else {
        cout << "0";
    }
    cout << endl;
}

ComplexNumber ComplexNumber::operator + (const ComplexNumber& other){
    ComplexNumber tong;
    tong a = a +other a;
    tong b = b + other b;
    return tong;
}

ComplexNumber ComplexNumber::operator - (const ComplexNumber& other){
    ComplexNumber hieu;
    hieu a = a - other a;
    hieu b = b - other b;
    return hieu;
}

ComplexNumber ComplexNumber::operator *(const ComplexNumber& other){
    ComplexNumber nhan;
    nhan a = (a * other a) + (7 * b * other b);
    nhan b = (a * other b) + (b * other a);
    return nhan;
}