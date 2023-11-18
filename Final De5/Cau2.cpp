#include <iostream>
#include <string.h>
using namespace std;
class Biglnteger {
    private:
    string res;
    public:
    Biglnteger(){
        res = "";

    }
    Biglnteger(string s){
        res = s;

    }
    friend istream& operator >>(istream& in, Biglnteger& other){
        in >> other.res;
        return in;
    }
    
    friend ostream& operator << (ostream& out, Biglnteger other){
        out << other.res;
        return out;
    }
    bool operator == (const Biglnteger& other){
        return res == other.res;
    }
};
int main (){
    Biglnteger n1("1234567891011");
    Biglnteger n2;
    cout << "Input an Integer = ";
    cin >> n2;
    if(n1 == n2) {
        cout << "Equal.\n";
    }
    else {
        cout << "Not equal.\n";
    }
}