#include <iostream>
using namespace std;
int main() {
	int tong_so_tien_chi = 0;
	int tong_so_tien_co;
	int khoan_chi_tieu;
	char Input;
	cout << "Nhap tong so tien ban co ";
	cin >> tong_so_tien_co;
		do {
			cout << "Nhap so tien da chi " << endl;
			cin >> khoan_chi_tieu;
			tong_so_tien_chi = tong_so_tien_chi + khoan_chi_tieu;


			cout << "Ban co muon nhap tiep khong , bam phím Y de tiep tuc va phim N de thoat ";
			cin >> Input;
		} while (
			Input == 'Y' || Input == 'y'
			);
		if (tong_so_tien_co < tong_so_tien_chi) {
			cout << "Ban da sai lo so tien ban co ";
			cout << tong_so_tien_chi - tong_so_tien_co;
		}
		else if (tong_so_tien_co > tong_so_tien_chi) {
			cout << "Ban da sai it hon so tien ban co ";
			cout << tong_so_tien_co - tong_so_tien_chi;
		}
	return 0;
}