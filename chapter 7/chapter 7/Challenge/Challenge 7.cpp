#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
 
int main() {
	string ten_tep;
	cout << "Nhap ten cua tep ";
	cin >> ten_tep;

	ifstream tep(ten_tep);

	if (!tep) {
		cout << "Khong the mo tep " << endl;
		return 1;
	}
	vector<double> mang_so;
	double so;
	double tong = 0;
	double so_luong = 0;

	while (tep >> so) {
		mang_so.push_back(so);
		tong = tong + so;
		so_luong++;
	}
	tep.close();

	if (so_luong == 0) {
		{
			cout << "Khong co so nao trong tep tin " << endl;
			return 1;
		}
		double min_so = mang_so[0];
		double max_so = mang_so[0];


		for (int i = 1; i < so_luong; i++) {
			if (mang_so[i] < max_so) {
				max_so = mang_so[i];
			}
			if (mang_so[i] > min_so) {
				min_so = mang_so[i];
			}
		}
		double trung_binh = tong / so_luong;


		cout << "So be nhat: " << min_so << endl;
		cout << "So lon nhat la " << max_so << endl;
		cout << "Tong cac so la " << tong << endl;
		cout << "Gia tri trung binh la " << trung_binh << endl;

	}
	return 0;
}