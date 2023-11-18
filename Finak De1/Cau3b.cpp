#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
 
   class MayLoc {
    protected:
       float congSuat;

       public:
       MayLoc(float congSuat) : congSuat(congSuat) {}
       virtual ~ MayLoc() {}

       virtual float tinhLuongNuoc() const = 0;
       virtual float tinhChiPhi() const = 0;
   };

   class MayLyTam : public MayLoc {
    private:
     float tocDoHaoXang;
     float thoiGianSuDung;
     public:
     MayLyTam(float congSuat, float tocDoHaoXang, float thoiGianSuDung):
     MayLoc(congSuat), tocDoHaoXang(tocDoHaoXang), thoiGianSuDung(thoiGianSuDung) {}

     float tinhLuongNuoc() const override {
        return congSuat * thoiGianSuDung;
     }

     float tinhChiPhi() const override {
        return tocDoHaoXang * 20000.0 + thoiGianSuDung * 50000.0;
     }
   };

   class MayXucTac : public MayLoc {
    private:
    float luongHoaChat;
    float thoiGianSuDung;

    public:
    MayXucTac(float congSuat, float luongHoaChat, float thoiGianSuDung) : MayLoc(congSuat), luongHoaChat(luongHoaChat), thoiGianSuDung(thoiGianSuDung) {}

    float tinhLuongNuoc() const override {
        float congSuatThatTe = congSuat;
        if(thoiGianSuDung < 10) {
            congSuatThatTe = congSuat * (luongHoaChat / 100); 
        }else{
            congSuatThatTe = congSuat * (luongHoaChat / 100) / (thoiGianSuDung / 10);
     }
     return congSuatThatTe * thoiGianSuDung;
    }

    float tinhChiPhi() const override {
        return thoiGianSuDung * 80000.0 + luongHoaChat * 10000.0;
    }
   };

   int main (){
    int N; // So may loc
    cout << "Nhap so may loc:";
    cin >> N;

    vector<MayLoc*> danhSachMayLoc;

    for (int i = 0; i < N; i++) {
        int loaiMay;
        float congSuat, luongHoaChat, thoiGianSuDung, tocDoHaoXang;

        cout << "Nhap loai may (1 - May Ly TAm, 2 - May Xuc Tac):";
        cin >> loaiMay;

        cout << "Nhap cong suat may (m3/h):";
        cin >> congSuat;

        if (loaiMay == 1) {
            cout << "Nhap toc do hao xang (lit/h):";
            cin >> tocDoHaoXang;
            cout << "Nhap thoi gian su dung (h):";
            cin >> thoiGianSuDung;
            danhSachMayLoc.push_back(new MayXucTac(congSuat, luongHoaChat, thoiGianSuDung));
        }
    }

    float luongNuoc, tg;
    cout << "Nhap luong nuoc (m3):";
    cin >> luongNuoc;
    // cin >> tg;
    float luongNuocLocDuoc = 0;
    float tongChiPhi = 0;

    for (MayLoc* mayLoc : danhSachMayLoc) {
        luongNuocLocDuoc += mayLoc->tinhLuongNuoc();
        tongChiPhi += mayLoc->tinhChiPhi();
    }

    if(luongNuocLocDuoc >= luongNuoc){
        cout << "Hut duoc het luong nuoc trong ho" << endl;
    }
    else{
        cout << "khong hut het luong nuoc trong ho" << endl;
    }

    cout << "Tong chi phi su dung cac may loc:" << fixed << setprecision(0) << tongChiPhi <<"dong" << endl;

    for (MayLoc* mayLoc : danhSachMayLoc) {
        delete mayLoc; // Giai phong bo nho
    }
    return 0;
   }