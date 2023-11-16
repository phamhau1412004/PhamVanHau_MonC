#include <iostream>
using namespace std;

// Hàm tính giá bán lẻ
double TinhGiaBanLe(double giaBanBuon, double tyLeTangGia)
{
    if (giaBanBuon < 0 || tyLeTangGia < 0) {
        cout << "Giá trị nhập vào không được âm." << endl;
        return -1.0; // Trả về giá trị âm để chỉ lỗi.
    }

    // Tính toán giá bán lẻ
    return giaBanBuon + (giaBanBuon * tyLeTangGia / 100.0);
}

int main()
{
    double giaBanBuon, tyLeTangGia;

    // Nhập giá trị từ người dùng
    cout << "Nhập giá bán buôn của sản phẩm: ";
    cin >> giaBanBuon;
    cout << "Nhập tỷ lệ tăng giá (vi du: 100% là 100): ";
    cin >> tyLeTangGia;

    // Tính toán giá bán lẻ
    double giaBanLe = TinhGiaBanLe(giaBanBuon, tyLeTangGia);

    if (giaBanLe >= 0) {
        // Hiển thị giá bán lẻ
        cout << "Giá bán lẻ của sản phẩm là: " << giaBanLe << " đồng" << endl;
    } else {
        cout << "Lỗi: Giá trị nhập vào không hợp lệ." << endl;
    }

    return 0;
}
