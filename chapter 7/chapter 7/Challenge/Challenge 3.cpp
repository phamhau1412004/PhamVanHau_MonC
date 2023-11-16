#include <iostream>
#include <string>
using namespace std;
int main() {
	 int So_luong_Vi = 5;
	string Ten_Mui_Vi[6]; 
	Ten_Mui_Vi[0] = "Nhe";
	Ten_Mui_Vi[1] = "Vua";
	Ten_Mui_Vi[2] = "Cay";
	Ten_Mui_Vi[3] = "Ngot";
	Ten_Mui_Vi[4] = "Chua";
	int Sold[6];
	int Total_Sold = 0;
	for (int i = 0; i < So_luong_Vi; i++) {
		cout << "Nhap so luong vi " << Ten_Mui_Vi << " da ban la " << endl;
		cin >> Sold[i];
	}
	for (int i = 0; i < So_luong_Vi; i++) {
		Total_Sold = Total_Sold + Sold[i];
	}
	cout << "Tong so luong hu da ban la " << Total_Sold << " hu";

	return 0;
 }