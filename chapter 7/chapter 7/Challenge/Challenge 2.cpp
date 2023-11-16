#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap so thang ban muon tinh " << endl;
	cin >> n;
	if (n < 0) {
		cout << "Nhap lai thang " << endl;
		return 1;
	}
	double arr[100];
	for (int i = 0; i < n; i++) {
		cout << "Nhap luong mua thang thu " << " " << i + 1 << endl;
		cin >> arr[i];
		}
	
	double Max_value = arr[0];
	double Min_value = arr[0];
	double Total = 0.0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > Max_value) {
			Max_value = arr[i];
		}
		if (arr[i] < Min_value) {
			Min_value = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		Total = Total + arr[i];
	}
	double Averange = Total / n;
		cout << " Thang co luong mua cao nhat la " << Max_value << endl;
		cout << "Thang co luong mua thap nhat la " << Min_value << endl;
		cout << " Tong luong mua cua " << n << " thang la " << Total << endl;
		cout << "Trung binh luong mua cua " << n << " thang la " << Averange;

	return 0;
}